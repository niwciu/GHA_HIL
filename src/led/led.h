/**
 * @file led.h
 * @author niwciu (niwciu@gmail.com)
 * @brief 
 * @version 1.0.0
 * @date 2025-11-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef LED_H
#define LED_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

void init_led(void);
void enable_led(void);
void disable_led(void);
bool get_curent_LED_state(void);

#ifdef __cplusplus
}   
#endif // LED_H