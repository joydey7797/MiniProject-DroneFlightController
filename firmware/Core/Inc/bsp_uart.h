#ifndef BSP_UART_H
#define BSP_UART_H

#include "main.h"

HAL_StatusTypeDef BSP_UART_Init(void);
HAL_StatusTypeDef BSP_UART_Write(const char *str);

#endif
