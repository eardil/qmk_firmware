SRC += eardil.c

BOOTMAGIC_ENABLE = yes
AUTO_SHIFT_ENABLE = yes

ifneq ($(strip $(NO_SECRETS)), yes)
    ifneq ("$(wildcard $(USER_PATH)/secrets.c)","")
        SRC += secrets.c
    endif
endif