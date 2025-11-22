#include "pushbutton_GPIO_interface.h"
#include "main.h"

static void user_key_gpio_init(void);
static PB_input_state_t get_user_key_gpio_state(void);


static PB_input_state_t get_pushbutton_gpio_state(GPIO_TypeDef *GPIO_Port, uint32_t GPIO_Pin);



PB_driver_interface_t KEY_UP_GPIO_interface_struct = {
    user_key_gpio_init,
    get_user_key_gpio_state,
};


const PB_driver_interface_t *pushbutton_UP_GPIO_interface_get(void)
{
    return &KEY_UP_GPIO_interface_struct;
}


static void user_key_gpio_init(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    /* GPIO Ports Clock Enable */
    __HAL_RCC_GPIOC_CLK_ENABLE();

    /*Configure GPIO pin : USER_BUTTON_Pin */
    GPIO_InitStruct.Pin = USER_BUTTON_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(USER_BUTTON_GPIO_Port, &GPIO_InitStruct);
    
}

static PB_input_state_t get_user_key_gpio_state(void)
{
    return get_pushbutton_gpio_state(USER_BUTTON_GPIO_Port,USER_BUTTON_Pin);
}


static PB_input_state_t get_pushbutton_gpio_state(GPIO_TypeDef *GPIO_Port, uint32_t GPIO_Pin)
{
    PB_input_state_t pin_state=UNKNOWN;
    if (HAL_GPIO_ReadPin(GPIO_Port,GPIO_Pin) == GPIO_PIN_SET) 
    {
        pin_state= RELEASED;
    }
    else 
    {
        pin_state=PUSHED;
    }
    return pin_state;
}
