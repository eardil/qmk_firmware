SRC += muse.c
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes
LEADER_ENABLE = yes
TAP_DANCE_ENABLE = yes
BOOTMAGIC_ENABLE = yes

ifneq ($(strip $(NO_SECRETS)), yes)
    ifneq ("$(wildcard $(USER_PATH)/secrets.c)","")
        SRC += secrets.c
    endif
endif