#ifndef LOGGER_H
#define LOGGER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "bsp_uart.h"

void Logger_Init(void);
void Logger_Print(const char *msg);
void Logger_Println(const char *msg);

#ifdef __cplusplus
}
#endif

#endif /* LOGGER_H */
