# EZpad

A compact productivity macropad built around the Seeed Studio XIAO RP2040. The project includes a custom PCB designed in KiCad and QMK firmware, with 6 keys and a rotary encoder for everyday shortcuts like copy, paste, plus volume control and an OLED status display.

**Features:**
5 push-button keys + 1 rotary encoder with integrated push switch (6 keys total), wired direct-pin (no matrix). Not having matrix makes it much simpler and easy. 
Rotary encoder controls system volume 
0.91" I2C OLED display (SSD1306-compatible) for status.
Firmware built on QMK, running on a Seeed Studio XIAO RP2040.
Firmware is custom made persoanlly built. 

**Guide to repo and firmware**  
Here’s what the main folders and files are for:  

CAD/ — 3D-printable case files and PCB/case models.  
PCB/ — KiCad project files, including the schematic, PCB layout, and project settings.  
PROD/ — Production-ready files, everything you need without needing to look through any of the source material, including the Gerbers, top and bottom 3d printable casefiles, and the compiled QMK firmware .uf2 file.  
projectdev images/ — Photos and images showing the PCB and CAD during development.  
BOM.csv — Bill of materials with the components and estimated prices.  

Using the Firmware:  

The firmware is built with QMK and is provided as a .uf2 file in the PROD/ folder.  
  
Connect the XIAO RP2040 to your computer with USB-C.  
Put the XIAO RP2040 into bootloader mode by double-pressing the reset button.  
A drive called RPI-RP2 should appear on your computer.  
Copy the .uf2 firmware file from PROD/ onto the RPI-RP2 drive.  
The board will automatically restart and load the firmware.  
Once it restarts, the macropad is ready to use.  

The firmware configures the five push buttons, rotary encoder, encoder push switch, and OLED according to the pin mapping documented below. Default behavior includes common shortcuts like copy and paste. 

---
**Schematic**
The KiCad schematic shows the XIAO RP2040 connected directly to five push buttons and a rotary encoder using GPIO pins, plus an I2C-connected OLED display.
I made this all myself for the first time ever,
My very own first schema 

<img width="1075" height="632" alt="schema" src="https://github.com/user-attachments/assets/d28ce478-f79c-4dab-b714-52cfa50ca3da" />

**PCB**
Same to be said about the pcb. It is quite simple enough, not as many traces as a motherboard haha. 
<img width="733" height="654" alt="pcb" src="https://github.com/user-attachments/assets/5db942be-8adc-42fa-a76f-fbe3c3af5ef3" />

**Cad**
I used a bit of both onshape and fusion360. But here is image from onsahpe. 
<img width="1293" height="631" alt="cad" src="https://github.com/user-attachments/assets/59f41a05-8468-4905-852a-83aeca705ab2" />

**BOM**

| Part | Quantity | Unit Price | Total Price | Notes |
|---|---:|---:|---:|---|
| Seeed Studio XIAO RP2040 | 1 | $17.00 | $17.00 | |
| Cherry MX switches (25-pack) | 1 pack | $6.00 | $6.00 | 25 switches |
| EC11 rotary encoder w/ push switch | 1 | $0.50 | $0.50 | |
| 0.91 inch I2C OLED display (SSD1306-compatible) | 1 | $3.90 | $3.90 | |
| Custom PCB | 1 | $2.50 | $2.50 | Plus shipping |
| USB-C cable | 1 | $6.00 | $6.00 | |
| Soldering kit and tools, flux, solder | 1 | $35.95 | $35.95 | Only if needed |
| **Project Total without soldering kit** | | | **$35.90** | |
| **Project Total with soldering kit** | | | **$71.85** | |

Onshape Link: https://cad.onshape.com/documents/0aff6fe35f9510e6fa8828e8/w/31160d7811d510a2e4875360/e/bf4022f82584262410f6731b?renderMode=0&uiState=6a84e180170a3f3dd4365e20
