/*
 * (C) Copyright 2003
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * Copyright (C) 2015 Cavium, Inc. <support@cavium.com>
 *
 * Copyright (C) 2016 Ubiquiti Networks, Inc.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __CONFIG_H__
#define __CONFIG_H__

#define UBNT_UBOOT_VER_FIXED_OFFSET

/**
 * Define CONFIG_OCTEON_PCI_HOST = 1 to map the pci devices on the
 * bus.  Define CONFIG_OCTEON_PCI_HOST = 0 for target mode when the
 * host system performs the pci bus mapping instead.  Note that pci
 * commands are enabled to allow access to configuration space for
 * both modes.
 */
#ifndef CONFIG_OCTEON_PCI_HOST
# define CONFIG_OCTEON_PCI_HOST		1
#endif

/** Enable USB support on OCTEON III */
#define CONFIG_OCTEON_USB_OCTEON3

#define CONFIG_OCTEON_BIG_STACK_SIZE		0x4000	/** 16K stack */

#include "octeon_common.h"

/* CONFIG_OCTEON_EBB7304 set by Makefile in include/config.h */

/** Default DDR clock if tuple doesn't exist in EEPROM */
#define EBB7304_DEF_DRAM_FREQ		1066

#define CONFIG_OCTEON_ENABLE_LED_DISPLAY	/** 8-char LED support */

#define CONFIG_LBA48			/** 48-bit mode */
#define CONFIG_SYS_64BIT_LBA		/** 64-bit LBA support */
#define CONFIG_SYS_ATA_BASE_ADDR	0 /** Make compile happy */
/* Base address of Common memory for Compact flash */

/* eMMC support */
#define CONFIG_OCTEON_MMC		/** Enable MMC support */
#define CONFIG_MMC_MBLOCK		/** Multi-block support */
#define CONFIG_CMD_MMC			/** Enable mmc command */
#define CONFIG_SYS_MMC_SET_DEV		/** Enable multiple MMC devices */
#define CONFIG_MMC			/** Enable MMC support */
#define CONFIG_OCTEON_MIN_BUS_SPEED_HZ	400000	/** Minimum MMC bus speed */

/** Maximum number of MMC devices needed for API */
#define CONFIG_SYS_MMC_MAX_DEVICE	2

#if 0
/** Enable support for native U-Boot application API */
#define CONFIG_API
#endif


/* TWSI address for the ispPAC-POWR1220AT8 Voltage Controller chip */
#define BOARD_ISP_TWSI_ADDR		0x08
#define CONFIG_ISPPAC_POWER

/** Address of MCU on TWSI bus */
#define BOARD_MCU_TWSI_ADDR		0x60

/** Address of board EEPROM on TWSI bus */
//#define CONFIG_SYS_I2C_EEPROM_ADDR	OCTEON_EBB7304_BOARD_EEPROM_TWSI_ADDR
/** Default EEPROM address */
//#define CONFIG_SYS_DEF_EEPROM_ADDR	CONFIG_SYS_I2C_EEPROM_ADDR
/* These speed up writes to the serial EEPROM by enabling page writes.
 * Please see the datasheet for details.
 */
#define CONFIG_SYS_EEPROM_PAGE_WRITE_BITS	5	/* 32 bytes */
#define CONFIG_SYS_EEPROM_PAGE_WRITE_DELAY_MS	5


#define UBNT_BOOT_SIZE_KB 2048
#define UBNT_EEPROM_SIZE_KB 64

#define _FLASH_PARTS _fparts(UBNT_BOOT_SIZE_KB, UBNT_EEPROM_SIZE_KB)
#define _fparts(bsize, esize) __fparts(bsize, esize)
#define __fparts(bsize, esize) \
    "phys_mapped_flash:" #bsize "k(boot0)," #bsize "k(boot1)," \
        #esize "k(eeprom)"

#define CONFIG_UBNT_EEPROM_ADDR	\
    (CONFIG_SYS_FLASH_BASE + (UBNT_BOOT_SIZE_KB * 2 * 1024))

/* Set bootdelay to 0 for immediate boot */
#define CONFIG_BOOTDELAY	0	/** autoboot after X seconds	*/
#define CONFIG_ZERO_BOOTDELAY_CHECK
#undef	CONFIG_BOOTARGS
#define CONFIG_BOOTCOMMAND \
    "fatload mmc 0 $(loadaddr) vmlinux.64;" \
    "bootoctlinux $(loadaddr) numcores=$(numcores) endbootargs " \
    "mem=0 root=/dev/mmcblk0p2 rootdelay=10 rw " \
    "rootsqimg=squashfs.img rootsqwdir=w " \
    "mtdparts=" _FLASH_PARTS

/** Enable octbootbus command */
//#define CONFIG_CMD_OCTEON_BOOTBUS

/**
 * The 'mtdids' environment variable is used in conjunction with the 'mtdparts'
 * variable to define the MTD partitions for u-boot.
 */
#define MTDPARTS_DEFAULT				\
	"octeon_nor0:3328k(bootloader)ro,"		\
	"4856k(storage),"				\
	"8k(environment)ro\0"

/** MTD device mapping */
#define MTDIDS_DEFAULT	"nor0=octeon_nor0\0"

/* Define this to enable built-in octeon ethernet support */
#define CONFIG_OCTEON_SGMII_ENET	/** SGMII ethernet support */
#define CONFIG_OCTEON_XAUI_ENET		/** XAUI ethernet support */

/* Enable Octeon built-in networking if RGMII support is enabled */
#if defined(CONFIG_OCTEON_RGMII_ENET) || defined(CONFIG_OCTEON_SGMII_ENET) || \
	defined(CONFIG_OCTEON_XAUI_ENET) || defined(CONFIG_OCTEON_QSGMII_ENET)
# define CONFIG_OCTEON_INTERNAL_ENET
#endif
#define CONFIG_OCTEON_MGMT_ENET

/* PCI console is supported since oct-remote-boot is supported.
 * Enable MUX and oct-remote-bootcmd support as well
 */
//#define CONFIG_SYS_PCI_CONSOLE
//#define CONFIG_CONSOLE_MUX
#define CONFIG_OCTEON_BOOTCMD

#include "octeon_cmd_conf.h"

#ifdef  CONFIG_CMD_NET
/**
 * Define available PHYs
 */
# define CONFIG_PHY_GIGE	/** Gigabit Ethernet PHY support */
//# define CONFIG_PHY_MARVELL	/** Marvell PHY support */
//# define CONFIG_PHY_VITESSE	/** Vitesse PHY support */
//# define CONFIG_PHY_BROADCOM	/** Broadcom PHY support */
# define CONFIG_PHY_CORTINA	/** Cortina PHY support */
# define CONFIG_PHY_CORTINA_CS4223 /** Inphy CS4223 support */
# define CONFIG_PHY_ATHEROS  /** Atheros 8033 support */
# include "octeon_network.h"
#endif

//#define CONFIG_DTT_ADT7475 /** Temp sensor & fan control **/

//#define CONFIG_CMD_OCTEON_TLVEEPROM	/** "tlv_eeprom" command */
/* "qlm" command */
#define CONFIG_CMD_QLM			/** QLM command */

/* Enable MTD partitioning support */
//#define CONFIG_CMD_MTDPARTS

/* Enable JFFS2 support */
//#define CONFIG_CMD_JFFS2

/** Enable "date" command to set and get date from RTC */
//#define CONFIG_CMD_DATE
#define CONFIG_CMD_FLASH		/** flinfo, erase, protect	*/
//#define CONFIG_CMD_EXT2			/** EXT2/3 filesystem support	*/
//#define CONFIG_CMD_EXT4			/** EXT4 filesystem support	*/
#define CONFIG_CMD_FAT			/** FAT support			*/
//#define CONFIG_FAT_WRITE		/** FAT write support		*/

/* SPI NOR flash support */
#define CONFIG_SF_DEFAULT_BUS		0	/** SPI flash default bus */
#define CONFIG_SF_DEFAULT_CS		0	/** SPI flash default chip select */
#define CONFIG_SF_DEFAULT_SPEED		50000000 /** Default speed in MHz */

#define CONFIG_OCTEON_SPI			/** Enable OCTEON SPI driver	*/
#define CONFIG_SPI_FLASH			/** Enable SPI flash driver	*/
#define CONFIG_SPI_FLASH_MACRONIX	/** Enable MACRONIX SPI flash	*/
#define CONFIG_CMD_SPI				/** Enable SPI command		*/
#define CONFIG_CMD_SF				/** Enable SPI flash command	*/

#define CONFIG_OCTEON_SPI_NO_FAILSAFE	/** SPI failsafe not yet supported */
/**
 * Start of where the SPI bootloader images are placed.  Must be on an erase
 * block boundary.
 */
#define CONFIG_OCTEON_SPI_BOOT_START		0x10000

/**
 * End of the SPI boot partition which is searched for a bootloader.  Must be
 * on an erase block boundary.
 */
#define CONFIG_OCTEON_SPI_BOOT_END		0x400000

/*
 * Miscellaneous configurable options
 */
/** Environment variables that will be set by default */
#define	CONFIG_EXTRA_ENV_SETTINGS					\
        "nuke_env=protect off $(env_addr) +$(env_size);" \
        "erase $(env_addr) +$(env_size)\0" \
        "mtdparts=" _FLASH_PARTS "\0" \
        "autoload=n\0"					\
        "qlm2_mode=xfi\0"				\
        "qlm3_mode=xfi\0"				\
        "qlm6_mode=sgmii\0"				\
        "ethprime=octeth8\0"				\
        ""

/*-----------------------------------------------------------------------
 * FLASH and environment organization
 */
#define CONFIG_SYS_FLASH_SIZE	        (8*1024*1024)	/** Flash size (bytes) */
#define CONFIG_SYS_MAX_FLASH_BANKS	1	/* max number of memory banks */
#define CONFIG_SYS_MAX_FLASH_SECT	(256)	/* max number of sectors on one chip */

/* Width of CFI bus to start scanning */
#define CONFIG_SYS_FLASH_CFI_WIDTH	FLASH_CFI_8BIT
/* Enable extra elements in CFI driver for storing flash geometry */
#define CONFIG_SYS_FLASH_CFI  		1
/* Enable CFI flash driver */
#define CONFIG_FLASH_CFI_DRIVER		1
#define CONFIG_SYS_FLASH_USE_BUFFER_WRITE

/* We're not RAM_RESIDENT so CONFIG_ENV_IS_IN_FLASH will be set. */
#if CONFIG_RAM_RESIDENT
# define	CONFIG_ENV_IS_NOWHERE	1
#else
# define	CONFIG_ENV_IS_IN_FLASH	1
#endif

//#define CONFIG_LIBATA			/** Needed for SATA */
//#define CONFIG_CMD_SATA			/** Enable the sata command */
//#define CONFIG_SYS_SATA_MAX_DEVICE	2	/** Support up to 2 devices */
//#define CONFIG_SATA_AHCI		/** Enable AHCI driver */
//#define CONFIG_SATA_AHCI_PLAT		/** Enable AHCI platform support */
//#define CONFIG_SATA_AHCI_OCTEON		/** Enable Octeon AHCI driver */
//#define CONFIG_AHCI_SETFEATURES_XFER	/** Enable setfeature xfer feature */

/* Address and size of Primary Environment Sector	*/
#define CONFIG_ENV_SIZE		(8 * 1024)	/** Size of environment */
#define CONFIG_ENV_ADDR		(CONFIG_SYS_FLASH_BASE + CONFIG_SYS_FLASH_SIZE - CONFIG_ENV_SIZE)

#define CONFIG_UBNT_GD_SIZE	CONFIG_ENV_SIZE
#if CONFIG_OCTEON_UBNT_E220
#define CONFIG_UBNT_EEPROM_SIZE	(4 * 1024)
#define CONFIG_UBNT_GD_ADDR	(CONFIG_UBNT_EEPROM_ADDR + CONFIG_UBNT_EEPROM_SIZE)
#else
#define CONFIG_UBNT_EEPROM_SIZE	(UBNT_EEPROM_SIZE_KB * 1024)
#define CONFIG_UBNT_GD_ADDR	(CONFIG_ENV_ADDR - CONFIG_UBNT_GD_SIZE)
#endif
#define CONFIG_UBNT_GD_MAC_DESC_OFF	0
#define CONFIG_UBNT_GD_BOARD_DESC_OFF	(CONFIG_UBNT_GD_MAC_DESC_OFF \
					 + sizeof(octeon_eeprom_mac_addr_t))

/*-----------------------------------------------------------------------
 * Cache Configuration (not used)
 */
#define CONFIG_SYS_DCACHE_SIZE		(32 * 1024)	/** L1 Data cache size */
#define CONFIG_SYS_ICACHE_SIZE		(78 * 1024)	/** L1 icache size */

#if CONFIG_OCTEON_PCI_HOST
/** Right now only the Intel E1000 driver has been ported */
# define CONFIG_E1000
#endif

/** The CN73XX has two TWSI buses and the EBB7304 board uses both of them */
#define CONFIG_SYS_MAX_I2C_BUS		1

//#define CONFIG_RTC_DS1337			/** RTC clock chip */
//#define CONFIG_SYS_I2C_RTC_ADDR		0x68	/** RTC I2C address */
//#define CONFIG_SYS_RTC_BUS_NUM		0	/** RTC I2C bus */

/** Enable watchdog support */
#define CONFIG_HW_WATCHDOG

/** Configure QLM support */
#define CONFIG_OCTEON_QLM

/* Include shared board configuration, consisting mainly of DRAM details. */
#include "octeon_ubnt_e1000_shared.h"

/** Disable DDR2 support */
#define CONFIG_OCTEON_DISABLE_DDR2

#define UBNT_RECOVERY
//#define CONFIG_FACTORY_RESET //Replaced by UBNT_RECOVERY
#define CONFIG_FACTORY_RESET_GPIO      0
#define CONFIG_FACTORY_RESET_TIME      4
#define CONFIG_TFTP_RECOVERY_TIME     10
#define CONFIG_TFTP_RECOVERY_DEFAULT_IP "192.168.1.20"
#define CONFIG_TFTP_RECOVERY_INTERFACE "octeth8"
#define UBNT_PLATFORM_ID "e1000"
#define CONFIG_USB_STORAGE
#define SHOW_USB_READ_STATUS
#define CONFIG_FACTORY_RESET_BOOTCMD   CONFIG_BOOTCOMMAND " resetsqimg"

#define CONFIG_UBNT_CHECK_MD5

#ifndef __ASSEMBLY__
extern void board_blink_led(int ms);
extern void board_set_led_on(void);
extern void board_set_led_off(void);
extern void board_set_led_normal(void);
#endif

#define CFG_PRINT_MPR

/* disable unnecessary command support */
#undef CONFIG_CMD_NFS
#undef CONFIG_CMD_DHCP
#undef CONFIG_CMD_DNS
#undef CONFIG_CMD_CDP
#undef CONFIG_CMD_TIME
#undef CONFIG_CMD_OCTEON_MEM
#undef CONFIG_CMD_MISC
#undef CONFIG_CMD_SHA1SUM
#undef CONFIG_CMD_UNZIP
#undef CONFIG_CMD_BUNZIP
#undef CONFIG_CMD_MD5SUM
#undef CONFIG_CMD_STRINGS
#undef CONFIG_CMD_SETEXPR
#undef CONFIG_CMD_GREPENV
#undef CONFIG_CMD_EEPROM
#undef CONFIG_CMD_ECHO
#undef CONFIG_CMD_OCTEON_REGINFO
#undef CONFIG_CMD_ITEST
#undef CONFIG_CMD_CONSOLE
#undef CONFIG_CMD_BDI
#undef CONFIG_CMD_LOADB
#undef CONFIG_CMD_LOADS
#undef CONFIG_CMD_SAVES
#undef CONFIG_CMD_SOURCE
#undef CONFIG_CMD_XIMG
#undef CONFIG_CMD_CRAMFS
#undef CONFIG_CMD_OCTEON_ERASEENV
#undef CONFIG_SHA1
#undef CONFIG_SHA256
#undef CONFIG_MD5
#undef CONFIG_BZIP2
#undef CONFIG_OCTEON_EEPROM_TUPLES
#define CONFIG_OCTEON_EEPROM_TUPLES 0
//#undef CONFIG_PCI
#undef CONFIG_PCI_PNP
#undef CONFIG_PCIAUTO_SKIP_HOST_BRIDGE
#undef CONFIG_SYS_PCI_64BIT
//#undef CONFIG_CMD_PCI
#undef CONFIG_CMD_IMPORTENV
#undef CONFIG_CMD_EXPORTENV
#undef CONFIG_CMD_ASKENV
#undef CONFIG_CMD_EDITENV
#undef CONFIG_CMD_IMLS
#undef CONFIG_CMD_ELF
//#undef CONFIG_CMD_BOOTM
//#undef CONFIG_CMD_EXT2
//#undef CONFIG_CMD_EXT4
#undef CONFIG_CMD_FDT
#endif	/* __CONFIG_H__ */
