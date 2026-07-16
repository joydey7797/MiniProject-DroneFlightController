#include "bsp_uart.h"
#include <string.h>

extern UART_HandleTypeDef huart2;

HAL_StatusTypeDef BSP_UART_Init(void)
{
    return HAL_OK;
}

HAL_StatusTypeDef BSP_UART_Write(const char *str)
{
    return HAL_UART_Transmit(&huart2,
                             (uint8_t *)str,
                             strlen(str),
                             HAL_MAX_DELAY);
}
