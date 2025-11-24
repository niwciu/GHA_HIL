#include "main.h"
#include "pushbutton.h"

extern PUSHBUTTON_TypDef *USER_BUTTON;

void HAL_IncTick(void)
{
  uwTick += (uint32_t)uwTickFreq;

  dec_pushbutton_deb_rep_timer(USER_BUTTON);
}