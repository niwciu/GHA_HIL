#include "keypad.h"
#include "pushbutton.h"
#include "led.h"

PUSHBUTTON_TypDef use_button;
PUSHBUTTON_TypDef *USER_BUTTON= &use_button;


void keypad_init(void)
{
    // Initialize the pushbutton
    init_pushbutton(USER_BUTTON, REPETITION_OFF, TRIGGER_ON_SHORT_PUSH_AND_LONG_PUSH, pushbutton_UP_GPIO_interface_get);
    
    // Register callbacks for short and long push events
    register_button_short_push_long_push_callbacks(USER_BUTTON, disable_led, enable_led);
}

void keypad_update(void)
{
    // Update the state of the pushbutton
    check_pushbutton(USER_BUTTON);
}

void update_keypad_deb_rep_timers(void)
{
    dec_pushbutton_deb_rep_timer(USER_BUTTON);
}