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
#ifndef _LED_H_
#define _LED_H_
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
#endif /* __cplusplus */
#endif /*_KEYPAD_H_ */