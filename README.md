# AquilaFC

A custom STM32H743-based flight controller hardware platform designed for autonomous UAV research and embedded flight-control development.

## Overview

AquilaFC is a custom flight controller project built around the STM32H743ZIT6 microcontroller.

The project currently focuses on:

- Flight controller schematic design
- PCB design
- STM32 pin configuration
- Hardware interface planning
- Embedded firmware architecture

## Hardware

### Main MCU

- STM32H743ZIT6
- ARM Cortex-M7
- High-performance embedded processing

### Interfaces

- SPI
- I2C
- UART
- CAN
- PWM
- ADC

### Supported Peripherals

- IMU
- Barometer
- Magnetometer
- GPS
- Telemetry
- RC Receiver
- ESC / Motor outputs

## Project Structure

```text
AquilaFC/
├── docs/
├── hardware/
├── firmware/
├── config/
└── reports/