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

#include "keypad.h"
#include "led.h"
#include "modbus_slave_manager.h"

static void init_peripherals(void);

void main_app(void)
{

    init_peripherals();

    while (1)
    {

        keypad_update();

        modbus_slave_manager_update();
    }
}

static void init_peripherals(void)
{
    init_led();
    keypad_init();
    modbus_slave_manager_init();
}
