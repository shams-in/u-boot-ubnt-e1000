#ifndef __ubntled_h__
#define __ubntled_h__

int leds_init(void);
void show_led_state(int status);

#define LED_FACTORY_RESET 1
#define LED_TFTP_RECOVERY 2
#define LED_NORMAL_MODE   3
#define LED_STEP_NEXT     4
#define LED_RECOVER_RUN   5
#define LED_USB_RUN       6

#endif
