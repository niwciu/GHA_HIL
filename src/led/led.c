/**
 * @file led.c
 * @author niwciu (niwciu@gmail.com)
 * @brief 
 * @version 1.0.0
 * @date 2025-11-24
 * 
 * @copyright Copyright (c) 2025
 * 
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
