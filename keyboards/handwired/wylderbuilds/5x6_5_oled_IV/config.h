// Dactyl Manuform Hotswap
#pragma once

// Basic Config

//#define PRODUCT_ID 0x0002

#define USE_SERIAL
#define SPLIT_HAND_PIN      GP16  // high = left, low = right
#define	SPLIT_HAND_PIN_LOW_IS_LEFT
//#define SPLIT_HAND_MATRIX_GRID GP9, GP8
//#define MASTER_RIGHT
//#define MASTER_LEFT

// Using Serial instead of I2C
#define SERIAL_USART_FULL_DUPLEX 
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED 921600
#define SERIAL_USART_PIN_SWAP

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

#define MATRIX_COL_PINS { GP2, GP3, GP4, GP5, GP6, GP7 }
#define MATRIX_ROW_PINS { GP8, GP9, GP29, GP28, GP27, GP26 }

#define MATRIX_COL_PINS_RIGHT { GP3, GP4, GP5, GP6, GP7, GP8, GP9 }
#define MATRIX_ROW_PINS_RIGHT { GP10, GP11, GP12, GP13, GP14, GP15 }

#define DIODE_DIRECTION COL2ROW

#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE  -25
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_RIGHT
#define PMW33XX_CS_PIN GP17
#define POINTING_DEVICE_TASK_THROTTLE_MS 1

//// Rotary Encoder ////
// GP21
// GP22

//#define ENCODERS_PAD_A { GP20 }
//#define ENCODERS_PAD_B { GP19 }
//#define ENCODER_RESOLUTIONS { 2 }

//#define ENCODERS_PAD_A_RIGHT { GP21 }
//#define ENCODERS_PAD_B_RIGHT { GP22 }
//#define ENCODER_RESOLUTIONS_RIGHT { 2 }


// WS2812 RGB LED strip input and number of LEDs
//#ifdef RGBLIGHT_ENABLE
//#define WS2812_PIO_USE_PIO1
//#define WS2812_PIO_USE_PIO1
//#define WS2812_DI_PIN GP18
//#define WS2812_EXTERNAL_PULLUP
//#define RGBLED_NUM 52
//#define DRIVER_LED_TOTAL 52
//#define RGBLED_SPLIT { 26, 26 }
//#define RGBLIGHT_SPLIT
//#define RGBLIGHT_EFFECT_RGB_TEST
//#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_SNAKE
//#define RGBLIGHT_EFFECT_TWINKLE
//#define RGBLIGHT_HUE_STEP 8
//#define RGBLIGHT_SAT_STEP 8
//#define RGBLIGHT_VAL_STEP 17
//#define RGBLIGHT_LIMIT_VAL 255
//#define STM32_SYSCLK KINETIS_SYSCLK_FREQUENCY
//#define NOP_FUDGE 0.4
/#endif

#define SPLIT_OLED_ENABLE
#define SPLIT_MODS_ENABLE

// OLED Pins and Driver
#ifdef OLED_ENABLE
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP12
#define I2C1_SCL_PIN GP13
#define RGBLIGHT_LAYERS
// OLED Options
#define SPLIT_OLED_ENABLE
#define SPLIT_WPM_ENABLE
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_MATRIX_SIZE 512
#define OLED_RESET -1
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 32000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 0
#endif

// Misc settings
// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE
// Enables This makes it easier for fast typists to use dual-function keys
#define PERMISSIVE_HOLD
// End of Basic Config
