#ifndef BSP_SPI_H
#define BSP_SPI_H

#include "main.h"

HAL_StatusTypeDef BSP_SPI_Read(
        SPI_HandleTypeDef *spi,
        GPIO_TypeDef *csPort,
        uint16_t csPin,
        uint8_t reg,
        uint8_t *data,
        uint16_t length);

HAL_StatusTypeDef BSP_SPI_Write(
        SPI_HandleTypeDef *spi,
        GPIO_TypeDef *csPort,
        uint16_t csPin,
        uint8_t reg,
        uint8_t *data,
        uint16_t length);

#endif
