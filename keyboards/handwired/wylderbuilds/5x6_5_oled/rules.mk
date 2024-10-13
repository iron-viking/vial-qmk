MCU = RP2040
SPLIT_KEYBOARD = yes
BOOTLOADER = rp2040
SERIAL_DRIVER = vendor
RGBLIGHT_ENABLE = yes
WS2812_DRIVER = vendor
SLEEP_LED_ENABLE = no
MOUSEKEY_ENABLE = yes
CONSOLE_ENABLE = yes
#COMMAND_ENABLE = yes
BOOTMAGIC_ENABLE = yes
OLED_ENABLE = yes
OLED_DRIVER = ssd1306
WPM_ENABLE = yes
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes           # Enable N-Key Rollover
ENCODER_ENABLE = no
#ENCODER_MAP_ENABLE = yes

OPT_DEFS += -DHAL_USE_I2C=TRUE