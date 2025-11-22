/**

*/
#include "led.h"
#include "led_driver_interface.h"

void init_led(void)
{
    init_LED_gpio();
    disable_led();
}

void enable_led(void)
{
    set_LED_gpio_high();
}

void disable_led(void)
{
    set_LED_gpio_low();
}
