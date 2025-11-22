/**

*/
#include "led.h"
#include "led_driver_interface.h"
#include <stdbool.h>

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

bool get_curent_LED_state(void)
{
    return is_LED_gpio_high();
}
