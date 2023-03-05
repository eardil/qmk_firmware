#pragma once
#include "quantum.h"

enum userspace_layers {
  _QWERTY,
  _GAME,
  _LOWER,
  _RAISE,
  _SHIFT,
  _ADJUST,
  _MACROS
};

enum userspace_keycodes {
  QWERTY = SAFE_RANGE,
  KC_SECRET_1,
  KC_SECRET_2,
  KC_SECRET_3,
  KC_SECRET_4,
  KC_SECRET_5,
  GAME,
  BACKLIT,
  NEW_SAFE_RANGE
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define MACROS MO(_MACROS)
#define SHIFT MO(_SHIFT)