#include "main.h"
#include "keypad.h"

void HAL_IncTick(void)
{
    uwTick += (uint32_t)uwTickFreq;
    update_keypad_deb_rep_timers();
}