#ifndef BOARD_H
#define BOARD_H

#include "main.h"

/*=========================================================
                        IMU
=========================================================*/

#define IMU_SPI                 hspi5

#define IMU_CS_PORT             GPIOF
#define IMU_CS_PIN              GPIO_PIN_10

#define IMU_INT_PORT            GPIOF
#define IMU_INT_PIN             GPIO_PIN_5

/*=========================================================
                    Magnetometer
=========================================================*/

#define MAG_SPI                 hspi5

#define MAG_CS_PORT             GPIOE
#define MAG_CS_PIN              GPIO_PIN_2

#define MAG_INT_PORT            GPIOC
#define MAG_INT_PIN             GPIO_PIN_15

/*=========================================================
                    Status LED
=========================================================*/

#define LED_PORT                GPIOD
#define LED_PIN                 GPIO_PIN_6

/*=========================================================
                    RGB LED
=========================================================*/

#define LED_R_PORT              GPIOD
#define LED_R_PIN               GPIO_PIN_11

#define LED_G_PORT              GPIOD
#define LED_G_PIN               GPIO_PIN_12

#define LED_B_PORT              GPIOD
#define LED_B_PIN               GPIO_PIN_13

#endif
