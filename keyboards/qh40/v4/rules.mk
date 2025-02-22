# MCU name
MCU = STM32F103
MCU_LDSCRIPT = STM32F103xB

# Bootloader selection
BOOTLOADER = uf2boot
# BOOTLOADER = stm32duino
BOARD = STM32_F103_STM32DUINO


TAP_DANCE_ENABLE = yes
WS2812_DRIVER = pwm
SERIAL_DRIVER = usart

SIGNALRGB_SUPPORT_ENABLE = yes

UNICODE_COMMON = yes
WPM_ENABLE = yes
LEADER_ENABLE = yes
REPEAT_KEY_ENABLE = yes
BLUETOOTH_ENABLE = no
CONSOLE_ENABLE = yes         # Console for debug
COMMAND_ENABLE = yes         # Commands for debug and configuration
AUDIO_ENABLE = no           # Audio output
KEY_OVERRIDE_ENABLE = yes
SEND_STRING_ENABLE = yes
SECURE_ENABLE = no
SEQUENCER_ENABLE = no
AUTO_SHIFT_ENABLE = yes
CAPS_WORD_ENABLE = yes
OS_DETECTION_ENABLE = yes