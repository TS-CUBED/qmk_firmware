# SRC += features/achordion.c
SRC += features/layer_lock.c


# Optimisation
# BOOTLOADER = rp2040
# EXTRAFLAGS+=-flto

# VIA_ENABLE = yes
# VIAL_ENABLE = yes

MOUSEKEY_ENABLE = yes       # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes      # Audio control and System control(+450)
CONSOLE_ENABLE = no        # Console for debug(+400)
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes           # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
MIDI_ENABLE = no           # MIDI controls
AUDIO_ENABLE = no          # Audio output on port C6
BLUETOOTH_ENABLE = no      # Enable Bluetooth with the Adafruit EZ-Key HID
GRAVE_ESC_ENABLE = no

CAPS_WORD_ENABLE = yes

MOUSE_ENABLE = yes
COMBO_ENABLE = yes
TAP_DANCE_ENABLE = no
LTO_ENABLE = yes

DYNAMIC_TAPPING_TERM_ENABLE = yes
