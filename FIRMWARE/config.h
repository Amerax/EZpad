#pragma once

// OLED is wired to D4/D5 on the XIAO, which is GP6/GP7 on RP2040 —
// both on the RP2040's I2C1 hardware block (same block GENERIC_PROMICRO_RP2040
// already enables by default, we're just repointing the pins to match our PCB).
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7
