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

#ifndef _KEYPAD_H_
#define _KEYPAD_H_

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

void keypad_init(void);
void keypad_update(void);
void update_keypad_deb_rep_timers(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /*_KEYPAD_H_ */