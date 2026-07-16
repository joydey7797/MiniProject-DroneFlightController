# System Architecture

## Overview

The flight controller is organized into several functional modules.

```
Sensors
   │
   ▼
STM32H743
   │
   ├── Sensor Processing
   ├── Sensor Fusion
   ├── PID Controller
   ├── Motor Mixer
   └── Communication
           │
           ▼
ESC Outputs
```

---

## Functional Modules

- Sensor Acquisition
- Sensor Fusion
- State Estimation
- PID Flight Controller
- Motor Mixer
- Communication Interface
- Data Logging