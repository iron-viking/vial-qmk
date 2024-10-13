# Board, Bootloader and MCU
MCU = RP2040
BOOTLOADER = rp2040
SERIAL_DRIVER = vendor
F_CPU = 8000000
SPLIT_KEYBOARD = yes

# Drivers for components
OLED_ENABLE = yes
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes           # Enable N-Key Rollover
OLED_DRIVER = SSD1306
#OLED_DRIVER = no
# Needed for OLED setup
WPM_ENABLE = yes
# RGB Light
RGBLIGHT_ENABLE = yes
CONSOLE_ENABLE = no
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
MOUSE_SHARED_EP = yes

VIA_ENABLE = yes

# Opt defs, comment out you're if not using OLED screen for the dactyl_manuform.
OPT_DEFS += -DHAL_USE_I2C=TRUE
