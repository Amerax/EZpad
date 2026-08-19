# custom_macropad — QMK skeleton

Built for: Seeed **XIAO RP2040** (swapped in for the SAMD21 on your board — same
footprint/pinout labels, so no rewiring needed) + ER-OLED 0.91" (SSD1306-compatible,
I2C) + 5 push buttons + 1 rotary encoder w/ integrated push switch.

## Pin mapping (confirmed from your schematic netlist)

Direct-pin design — each switch/encoder line goes to its own GPIO, common ground.
No matrix. Converted from XIAO D-labels to RP2040 GPIO names:

| Component | XIAO label | RP2040 GPIO |
|---|---|---|
| SW1 | D0 | GP26 |
| SW2 | D1 | GP27 |
| SW3 | D2 | GP28 |
| SW4 | D3 | GP29 |
| OLED SDA | D4 | GP6 |
| OLED SCL | D5 | GP7 |
| SW5 | D6 | GP0 |
| Encoder B | D7 | GP1 |
| Encoder push (S2) | D9 | GP4 |
| Encoder A | D10 | GP3 |

All filled into `info.json`:
- `matrix_pins.direct`: row0 = `[SW1, SW2, SW3]` = `[GP26, GP27, GP28]`,
  row1 = `[SW4, SW5, EncoderPush]` = `[GP29, GP0, GP4]`
- `encoder.rotary[0]`: `pin_a = GP3` (D10), `pin_b = GP1` (D7)
- `i2c`: `sda_pin = GP6`, `scl_pin = GP7`

