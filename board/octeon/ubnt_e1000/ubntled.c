#include "common.h"
#include "ubntled.h"

#define LED_BLINK_DELAY 500000
#define LED_BLINK_COUNT 3

#define LED_ON 0
#define LED_OFF 1
#define LED_NORMAL 2

static int led_idx = 0;
static int led_cnt = 3;
static int led_first = 0;
static int led_last = 2;
static int led_reset = 0;

extern void board_set_one_led(int num, int mode);
extern char * get_dev_name(void);
extern int board_led_count(void);

// Driver
typedef struct led_driver {
	void (*init)(struct led_driver* d);
	void (*set_state)(struct led_driver* d, int status);
} led_driver_t;


static led_driver_t _led_driver;
static led_driver_t* active_driver = NULL;

void show_led_state_driver(int status);
void show_led_state_dummy(int status);

static void (*led_state)(int) = show_led_state_dummy;

void
show_led_state(int status) {
	(*led_state)(status);
}

void
show_led_state_dummy(int status) {
	(void)status;
	return;
}

void
show_led_state_driver(int status) {
	if (active_driver && active_driver->set_state) {
		active_driver->set_state(active_driver, status);
	}
	return;
}

static void
led_driver_none(led_driver_t* d) {
	if (!d)
		return;
	memset(d, 0, sizeof(led_driver_t));
	d->set_state = NULL;
	d->init = NULL;
}

static void
led_all_off(void) {
	int i;
	for(i = 0; i<led_cnt; i++)
		board_set_one_led(i,LED_OFF);
	board_set_led_off();
}

static void
led_all_on(void) {
	int i;
	for(i = led_first; i<led_cnt; i++)
		board_set_one_led(i,LED_ON);
}

static void
led_all_normal(void) {
	int i;
	for(i = 0; i<led_cnt; i++)
		board_set_one_led(i,LED_NORMAL);
}

static void
led_show_reset(void) {
	int i;
	led_idx = led_first;
	udelay(LED_BLINK_DELAY);
	led_all_off();
	udelay(LED_BLINK_DELAY);
	for(i = 0; i<LED_BLINK_COUNT; i++) {
		board_set_led_on();
		udelay(LED_BLINK_DELAY);
		board_set_led_off();
		udelay(LED_BLINK_DELAY);
	}
}

static void
led_show_tftp(void) {
	int i;
	led_idx = 0;
	led_all_off();
	udelay(LED_BLINK_DELAY);
	for(i = 0; i<LED_BLINK_COUNT; i++) {
		led_all_on();
		udelay(LED_BLINK_DELAY);
		led_all_off();
		udelay(LED_BLINK_DELAY);
	}
}

static void
led_show_normal(void) {
	led_idx = 0;
	led_all_normal();
}

static void
led_step_next(void) {
	led_all_off();
	if (led_idx >= led_cnt)
		led_idx = led_first;
	board_set_one_led(led_idx,LED_ON);
	led_idx++;
}

static void
led_show_recover_run(void) {
	static int i = 0;
	int j = 0;
	int m1,m2;
	led_idx = 0;

	if (i) {
		m1 = LED_ON;
		m2 = LED_OFF;
	} else {
		m1 = LED_OFF;
		m2 = LED_ON;
	}

	for (j=led_first; j<led_cnt; j++) {
		if (j&1)
			board_set_one_led(j, m1);
		else
			board_set_one_led(j, m2);
	};
	i = ~i;
}

static void
led_show_usb_run(void) {
	led_all_off();
	board_set_one_led(led_first, LED_ON);
	board_set_one_led(led_last, LED_ON);
 }

static void
set_state(struct led_driver* d, int status) {
	switch (status) {
		case LED_FACTORY_RESET:
			led_show_reset();
			break;
		case LED_TFTP_RECOVERY:
			led_show_tftp();
			break;
		case LED_NORMAL_MODE:
			led_show_normal();
			break;
		case LED_STEP_NEXT:
			led_step_next();
			break;
		case LED_RECOVER_RUN:
			led_show_recover_run();
			break;
		case LED_USB_RUN:
			led_show_usb_run();
			break;
	}
	return;
}

static void
led_driver(led_driver_t* d) {
	if (!d)
		return;

	memset(d, 0, sizeof(led_driver_t));
	d->set_state = set_state;
	d->init = NULL;
};

static int loaded = 0;

int
leds_init(void){
	char *dev_name;

	if (loaded)
		return 0;

	dev_name = get_dev_name();
	if (!dev_name)
		return 0;

	if (!strcmp(dev_name, "e1000")) {
		led_driver(&_led_driver);
		led_cnt = board_led_count();
		led_last = led_cnt - 1;
		led_first = 0;
		led_reset = led_last;
		led_idx = led_first;
		loaded = 1;
	}

	if (loaded == 0) {
		led_driver_none(&_led_driver);
		loaded = 1;
	}

	active_driver = &_led_driver;
	if (active_driver->init) {
		active_driver->init(active_driver);
	}

	led_state = show_led_state_driver;
	return 0;
}
