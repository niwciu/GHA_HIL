/**
 * @file led_driver_interface.h
 * @author niwciu (niwciu@gmail.com)
 * @brief 
 * @version 1.0.0
 * @date 2025-11-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdbool.h>

void init_LED_gpio(void);
void set_LED_gpio_high(void);
void set_LED_gpio_low(void);
void toggle_LED_gpio(void);
bool is_LED_gpio_high(void);