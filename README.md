
# ST7789 240x240 Display Configuration with ESP32

## Overview

This project uses the ST7789 library to drive a 240x240 pixel display with an ESP32 microcontroller. The user setup has been customized to fit the specific hardware configuration of the ESP32.

## Configuration Details

### Library

- **Library Used**: ST7789

### Custom User Setup

The `User_Setup.h` file has been modified for the ESP32 as follows:

- **Display Driver**: Configured for ST7789.
- **Display Dimensions**: Set to 240x240 pixels.
- **Color Order**: Defined as RGB.
- **Inversion**: Optionally enabled or disabled (depending on need).
- **Pin Assignments**:
  - **DC**: GPIO 2
  - **RST**: GPIO 4
  - **MOSI**: GPIO 23
  - **SCLK**: GPIO 18
  - **CS**: Not used (set to -1)

### Font and SPI Settings

- **Fonts**: Various fonts loaded including GLCD, FONT2, FONT4, FONT6, FONT7, FONT8, and custom FreeFonts.
- **SPI Frequency**: Set to 40 MHz for optimal performance.

## Usage

1. **Install the ST7789 Library**: Ensure you have the ST7789 library installed in your Arduino IDE or compatible environment.
2. **Update Pin Definitions**: Adjust the pin assignments in `User_Setup.h` to match your specific ESP32 setup if different.
3. **Upload Code**: Compile and upload the code to your ESP32.

## Notes

- Ensure the hardware connections are correctly set according to the pin assignments.
- Adjust settings in `User_Setup.h` based on your specific requirements for display performance and features.

For more detailed instructions on using the ST7789 library, refer to the library documentation and examples.
