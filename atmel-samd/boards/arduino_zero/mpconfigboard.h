#define USB_REPL

#define MICROPY_HW_BOARD_NAME "Arduino Zero"
#define MICROPY_HW_MCU_NAME "samd21g18"

#define MICROPY_HW_LED_MSC  PIN_PA17 // red
#define MICROPY_HW_LED_TX   PIN_PA27
#define MICROPY_HW_LED_RX   PIN_PB03

#define MICROPY_HW_NEOPIXEL &pin_PB22

#define AUTORESET_DELAY_MS 500

#include "internal_flash.h"
