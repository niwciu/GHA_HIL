#include "modbus_slave_manager.h"
#include "modbus_slave.h"
#include "pushbutton.h"
#include "led.h"

#define MODBUS_SLAVE_ADR 1
#define MODBUS_SLAVE_BAUD 115200U
#define MODBUS_SLAVE_PARITY NONE

#define MODBUS_DIS_IN_LED_STATE_ADDR 0
#define MODBUS_DIS_IN_PB_STATE_ADDR 1

modbus_coil_disin_t modbus_LED_state;
modbus_coil_disin_t modbus_PB_state;

extern PUSHBUTTON_TypDef *USER_BUTTON;

static void set_current_modbus_PB_state(void);

void modbus_slave_manager_init()
{
    register_app_data_to_modbus_slave_din_table( MODBUS_DIS_IN_LED_STATE_ADDR, &modbus_LED_state); 
    register_app_data_to_modbus_slave_din_table( MODBUS_DIS_IN_PB_STATE_ADDR, &modbus_PB_state); 
    modbus_slave_init(RTU ,MODBUS_SLAVE_BAUD, MODBUS_SLAVE_PARITY, MODBUS_SLAVE_ADR);
}

void modbus_slave_manager_update(void)
{
    check_modbus_request();

    // Example: Update LED state based on Modbus coil
    modbus_LED_state = get_curent_LED_state();
    set_current_modbus_PB_state();
}

static void set_current_modbus_PB_state(void)
{
    if(USER_BUTTON-> input_state == PUSHED)
    {
        modbus_PB_state = true;
    }
    else
    {
        modbus_PB_state = false;
    }
}

