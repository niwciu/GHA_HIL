/**
 * @file main_app.c
 * @author niwciu (niwciu@gmail.com)
 * @brief 
 * @version 1.0.0
 * @date 2025-11-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "main_app.h"
#include "../lib/PUSHBUTTON/pushbutton.h"
#include "led/led.h"


PUSHBUTTON_TypDef use_button;
PUSHBUTTON_TypDef *USER_BUTTON= &use_button;


static void init_peripherals(void);

 void main_app(void)
 {

    init_peripherals();

    while(1)
    {
        check_pushbutton(USER_BUTTON);

    }
 }


 static void init_peripherals(void)
 {
    init_led();

    init_pushbutton(USER_BUTTON, REPETITION_OFF, TRIGGER_ON_SHORT_PUSH_AND_LONG_PUSH, pushbutton_UP_GPIO_interface_get);
    register_button_short_push_long_push_callbacks(USER_BUTTON,disable_led,enable_led);

 }