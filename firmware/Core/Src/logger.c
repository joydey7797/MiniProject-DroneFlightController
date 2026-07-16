#include "logger.h"

void Logger_Init(void)
{
}

void Logger_Print(const char *msg)
{
    BSP_UART_Write(msg);
}

void Logger_Println(const char *msg)
{
    BSP_UART_Write(msg);
    BSP_UART_Write("\r\n");
}
