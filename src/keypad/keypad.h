/**
 * @file keypad.h
 * @author niwciu (niwciu@gmail.com)
 * @brief 
 * @version 1.0.0
 * @date 2025-11-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef KEYPAD_H
#define KEYPAD_H
#ifdef __cplusplus
extern "C" {
#endif  

void keypad_init(void);
void keypad_update(void);
void update_keypad_deb_rep_timers(void);

#ifdef __cplusplus
}   
#endif // KEYPAD_H