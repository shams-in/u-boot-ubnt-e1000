#include "config.h"
#if defined (UBNT_RECOVERY)
#include "common.h"
#include "command.h"
#include <usb.h>
#include "ubntled.h"

extern int usb_stor_curr_dev;
extern const char *get_dev_name(void);
extern int do_usb(cmd_tbl_t *cmdtp, int flag, int argc, char *const argv[]);
extern int do_bootoctlinux(cmd_tbl_t *, int, int, char *[]);

#define RECOVERY_MAGIC_LEN (sizeof(int32_t)*8)
#define DEV_ID_TYPE int32_t
#define ARRSIZE(x)  (sizeof(x) / sizeof((x)[0]))
#define FILE_HEAD_EDGE "UBNT.EDGEOS"
#define FILE_HEAD_UBI  "UBNT.UBIOS"
#define V_MAJ 1
#define V_MIN 0

//keep fields 32 bit aligned.
typedef struct {
	char magic[RECOVERY_MAGIC_LEN];
	int32_t v_maj;
	int32_t v_min;
	int32_t i_len;
	int32_t i_crc;
	int32_t d_len;
	int32_t *data;
} img_head;

static ulong rec_check_header (ulong addr, ulong len) {
	img_head *head =  (img_head *)addr;
	int32_t image_len;
	int32_t checksum;
	int32_t dev_num;
	int32_t v_maj,v_min;
	int i;
	char dev_id[]="********";
	DEV_ID_TYPE *devs;
	const char *dev_name = NULL;

	dev_name = get_dev_name();

	if (!dev_name) {
		printf ("   Device type detection failure\n");
		return 0;
	}

	if (strncmp(head->magic,FILE_HEAD_EDGE,RECOVERY_MAGIC_LEN) &&
		strncmp(head->magic,FILE_HEAD_UBI,RECOVERY_MAGIC_LEN)) {
		printf ("   Unsupported image.\n");
		return 0;
	}

	v_maj = ntohl(head->v_maj);
	v_min = ntohl(head->v_min);
	if (( v_maj != V_MAJ) || ( v_min != V_MIN)) {
		printf ("   Invalid version: %u.%u\n",v_maj,v_min);
		return 0;
	}

	image_len = ntohl(head->i_len);
	if (image_len != (int32_t)len) {
		printf ("   Lenght mistmach: expected %zu, received %lu\n",image_len,len);
		return 0;
	}

	checksum = ntohl(head->i_crc);
	head->i_crc = 0;

	if (crc32 (0, (unsigned char *)addr, image_len) != checksum) {
		printf ("   Bad file checksum\n");
		return 0;
	}
	head->i_crc = htonl(checksum);

	printf ("Image\t\t%s\n", head->magic);
	printf ("Version:\t%u.%u\n", v_maj, v_min);
	printf ("Lenght:\t\t%u\n", image_len);
	printf ("CRC:\t\t%08x\n", checksum);

	dev_num = ntohl(head->d_len);


	devs = (DEV_ID_TYPE *)&head->data;
	printf("Supported devices:\n");
	for (i = 0; i < dev_num; i++) {
		printf("\t\t[%08x]\n",ntohl(devs[i]));
	}

	for (i = 0; i < dev_num; i++) {
		sprintf(dev_id,"%x",ntohl(devs[i]));
		if(!strcmp(dev_id,dev_name))
			break;
	}

	if (i == dev_num) {
		printf ("   Uncompatible device [%s]\n",dev_name);
		return 0;
	}

	return (addr+sizeof(img_head) - sizeof(((img_head *)0)->data) + dev_num*sizeof(DEV_ID_TYPE));
}


ulong rec_check_image (ulong addr, ulong data_len)
{
#ifdef EXTRA_IMG_CHECK
	image_header_t header;
	ulong data, len, checksum;
	image_header_t *hdr = &header;
#endif

	if (!getenv("useraw")) {
		if (!(addr = rec_check_header(addr,data_len)))
			return 0;
	}

//Too much checking causes tftp timeout
#ifdef EXTRA_IMG_CHECK
	printf ("\n## Checking Image at %08lx ...\n", addr);

	/* Copy header so we can blank CRC field for re-calculation */
	memcpy (&header, (char *)addr, sizeof(image_header_t));

	if (ntohl(hdr->ih_magic) != IH_MAGIC) {
		puts ("   Bad Magic Number\n");
		return 0;
	}

	data = (ulong)&header;
	len  = sizeof(image_header_t);

	checksum = ntohl(hdr->ih_hcrc);
	hdr->ih_hcrc = 0;

	if (crc32 (0, (unsigned char *)data, len) != checksum) {
		puts ("   Bad Header Checksum\n");
		return 0;
	}

	hdr->ih_hcrc = htonl(checksum);

	print_image_hdr ((image_header_t *)addr);

	data = addr + sizeof(image_header_t);
	len  = ntohl(hdr->ih_size);

	puts ("   Verifying Checksum ... ");
	if (crc32 (0, (unsigned char *)data, len) != ntohl(hdr->ih_dcrc)) {
		puts ("   Bad Data CRC\n");
		return 0;
	}
	puts ("OK\n");
#endif

	return addr;
}


int rec_usb(cmd_tbl_t *cmdtp) {
	ulong boot_addr;
	char *argv[5];
	char addr_str[16], dev_str[4];
	char file_str[64];
	int i, done;
	char *local_args[3] = {"bootoctlinux", "0x00000000", NULL};

	argv[1] = "start";

	show_led_state(LED_USB_RUN);

	do_usb(cmdtp, 0, 2, argv);
	if (usb_stor_curr_dev < 0) {
		printf("\n No USB Storage found. Upgrade FW failed!\n");
		return -1;
	}

	sprintf(file_str, "recovery_%s.img", UBNT_PLATFORM_ID);

	printf("Searching for %s...\n",file_str);

	sprintf(addr_str, "0x%lX", load_addr);

	argv[1] = "usb";
	argv[2] = &dev_str[0];
	argv[3] = &addr_str[0];
	argv[4] = &file_str[0];

	done = 0;
	for (i = 0; i < USB_MAX_DEVICE; ++i) {
		block_dev_desc_t *stor_dev = usb_stor_get_dev(i);
		if (stor_dev == NULL)
			break;

		if (stor_dev->type != DEV_TYPE_UNKNOWN) {
			sprintf(dev_str, "%d", i);
			if (do_fat_fsload(cmdtp, 0, 5, argv) == 0) {
				done = 1;
				break;
			}
		}
	}

	if (!done) {
		printf("\nRecovery file not found!\n");
		return -1;
	}

	boot_addr = rec_check_image(load_addr,simple_strtoul(getenv("filesize"), NULL, 16));

	if (!boot_addr) {
		printf("Firmware check failed!\n");
		return -1;
	}

	sprintf(local_args[1],"0x%lX",boot_addr);
	//Execute image
	show_led_state(LED_NORMAL_MODE);
	do_bootoctlinux (NULL, 0, 2, local_args);

	//Should not reach this line. Something goes wrong. Reset.
	do_reset(NULL, 0, 0, NULL);
	return -1;
}
#endif
