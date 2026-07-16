# Hardware Overview

## Introduction

The AquilaFC hardware is designed as a high-performance embedded flight controller for multirotor UAVs.

---

## Main Processor

STM32H743ZIT6

- ARM Cortex-M7
- 480 MHz
- 2 MB Flash
- 1 MB SRAM

---

## Sensors

### MPU6000

Purpose:
Measures acceleration and angular velocity.

Interface:
SPI

---

### MS5611

Purpose:
Altitude measurement.

Interface:
I2C

---

### QMC5883L

Purpose:
Heading estimation.

Interface:
I2C

---

## Communication Interfaces

- SPI
- I2C
- UART
- USB
- SWD

---

## Power Supply

Input Voltage

5V

Generated Rails

- 5V
- 3.3V

---

## Motor Outputs

PWM Outputs

- Motor 1
- Motor 2
- Motor 3
- Motor 4

---

## Expansion

- GPS
- Telemetry
- RC Receiver
- SD Card