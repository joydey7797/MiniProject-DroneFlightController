#include "bsp_spi.h"

HAL_StatusTypeDef BSP_SPI_Read(
        SPI_HandleTypeDef *spi,
        GPIO_TypeDef *csPort,
        uint16_t csPin,
        uint8_t reg,
        uint8_t *data,
        uint16_t length)
{
    reg |= 0x80;

    HAL_GPIO_WritePin(csPort, csPin, GPIO_PIN_RESET);

    HAL_SPI_Transmit(spi, &reg, 1, HAL_MAX_DELAY);

    HAL_SPI_Receive(spi, data, length, HAL_MAX_DELAY);

    HAL_GPIO_WritePin(csPort, csPin, GPIO_PIN_SET);

    return HAL_OK;
}

HAL_StatusTypeDef BSP_SPI_Write(
        SPI_HandleTypeDef *spi,
        GPIO_TypeDef *csPort,
        uint16_t csPin,
        uint8_t reg,
        uint8_t *data,
        uint16_t length)
{
    reg &= 0x7F;

    HAL_GPIO_WritePin(csPort, csPin, GPIO_PIN_RESET);

    HAL_SPI_Transmit(spi, &reg, 1, HAL_MAX_DELAY);

    HAL_SPI_Transmit(spi, data, length, HAL_MAX_DELAY);

    HAL_GPIO_WritePin(csPort, csPin, GPIO_PIN_SET);

    return HAL_OK;
}
