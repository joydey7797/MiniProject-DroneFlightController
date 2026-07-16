#include "aquila.h"
#include "bsp_uart.h"
#include "bsp_gpio.h"
#include "logger.h"

static uint32_t ledTimer = 0;

void Aquila_Init(void)
{
    BSP_UART_Init();
    BSP_GPIO_Init();
    Logger_Init();

    Logger_Println("");
    Logger_Println("=====================================");
    Logger_Println("         AquilaFC v0.1.0");
    Logger_Println("=====================================");
    Logger_Println("Boot Successful");
    Logger_Println("");
}

void Aquila_Run(void)
{
    if(HAL_GetTick() - ledTimer >= 500)
    {
        ledTimer = HAL_GetTick();

        BSP_LED_Toggle();
    }
}
