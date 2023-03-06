/* Copyright 2022 Irving Simonin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "muse.h"
#include "keymap_spanish.h"
#include "eardil.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   Ñ  |  ´   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   -  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Macro| GUI  | Alt  |Lower | Shift|Space |Raise | Left | Up   | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_grid(
  KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,   KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC, \
  KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_LBRC, \
  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,   KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT, \
  KC_LCTL,  MACROS,   KC_LGUI,  KC_LALT,  LOWER,    SHIFT,  KC_SPC,   RAISE,    KC_LEFT,  KC_UP,    KC_DOWN,  KC_RGHT
),


/* Gaming
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   Ñ  |  ´   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   -  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Macro| GUI  | Alt  |Space |Lower |Space |Raise | Left | Up   | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_GAME] = LAYOUT_planck_grid( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, KC_LGUI, KC_LALT, KC_SPC,  LOWER,   _______, _______, _______, _______, _______, _______ \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |Play/P|   F1 |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F11 |  F12 |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |PrntSc|      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | Home | PgUp | PgDn | End  |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_planck_grid( \
  KC_MPLY,  KC_F1,    KC_F2,    KC_F3,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10, \
  KC_VOLU,  KC_F11,   KC_F12,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
  KC_VOLD,  KC_MPRV,  KC_MNXT,  KC_PSCR,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
  TO(0),    _______,  KC_NO,    _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGUP,  KC_PGDN,  KC_END
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   |  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CapL |   @  |   S  |   D  |   F  |   G  |   ^  |   *  |   {  |   }  |   ~  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   <  |   >  |   C  |   V  |   B  |   N  |   +  |   ¿  |   ?  |   \  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | Home | PgUp | PgDn | End  |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_planck_grid( \
  KC_GRV,   KC_1,       KC_2,     KC_3,     KC_4,     KC_5,     KC_6,           KC_7,           KC_8,     KC_9,          KC_0,          KC_DEL, \
  KC_CAPS,  RALT(KC_Q), _______,  _______,  _______,  _______,  RALT(KC_QUOT),  LSFT(KC_RBRC),  KC_QUOT,  KC_BSLS,       RALT(KC_RBRC), KC_MINS, \
  _______,  ES_LABK,    ES_RABK,  _______,  _______,  _______,  _______,        KC_RBRC,        KC_EQL,   LSFT(KC_MINS), RALT(KC_MINS), _______, \
  _______,  _______,    _______,  _______,  _______,  _______,   KC_RALT,        _______,       KC_HOME,  KC_PGUP,       KC_PGDN,       KC_END
),


/* Shift
 * ,-----------------------------------------------------------------------------------.
 * |   |  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CapL |   @  |   S  |   D  |   F  |   G  |   ^  |   *  |   {  |   }  |   ~  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   <  |   >  |   C  |   V  |   B  |   N  |   +  |   ¿  |   ?  |   \  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | Home | PgUp | PgDn | End  |
 * `-----------------------------------------------------------------------------------'
 */
[_SHIFT] = LAYOUT_planck_grid( \
  S(KC_GRV),S(KC_1),    S(KC_2),  S(KC_3),  S(KC_4),  S(KC_5),  S(KC_6),        S(KC_7),        S(KC_8),    S(KC_9),      S(KC_0),       S(KC_DEL),  \
  KC_CAPS,  RALT(KC_Q), _______,  _______,  _______,  _______,  RALT(KC_QUOT),  LSFT(KC_RBRC),  S(KC_QUOT), S(KC_BSLS),   RALT(KC_RBRC), S(KC_MINS), \
  _______,  ES_LABK,    ES_RABK,  _______,  _______,  _______,  _______,        KC_RBRC,        KC_EQL,     S(KC_MINS),   RALT(KC_MINS), _______, \
  _______,  _______,    _______,  _______,  _______,  _______,  KC_RALT,        _______,        KC_HOME,    KC_PGUP,      KC_PGDN,       KC_END
),



/* Adjust (Lower + Raise)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |MUSmod|Aud on|Audoff|AGnorm|AGswap|Qwerty|Gaming|      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|TermOn|TermOf|      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_planck_grid(
    _______, QK_BOOT, DB_TOGG,  RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_DEL ,
    _______, _______, MU_NEXT,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  GAME,    AG_LSWP, AG_LNRM, _______,
    _______, AU_PREV, AU_NEXT,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
),

/* Macros
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MACROS] = LAYOUT_planck_grid( \
  _______,  KC_SECRET_1,  KC_SECRET_2,  KC_SECRET_5,  _______, _______, _______, _______, _______, _______, _______, _______, \
  _______,  KC_SECRET_3,  KC_SECRET_4,  _______,      _______, _______, _______, _______, _______, _______, _______, _______, \
  _______,  _______,      _______,      _______,      _______, _______, _______, _______, _______, _______, _______, _______, \
  _______,  _______,      _______,      _______,      _______, _______, _______, _______, _______, _______, _______, _______ \
),

};

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_PURPLE);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
#endif

#ifdef AUDIO_ENABLE
  float plover_song[][2]     = SONG(PLOVER_SOUND);
  float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);
#endif

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_DOWN);
      #else
        tap_code(KC_PGDN);
      #endif
    } else {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_UP);
      #else
        tap_code(KC_PGUP);
      #endif
    }
  }
    return true;
}

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0: {
#ifdef AUDIO_ENABLE
            static bool play_sound = false;
#endif
            if (active) {
#ifdef AUDIO_ENABLE
                if (play_sound) { PLAY_SONG(plover_song); }
#endif
                layer_on(_ADJUST);
            } else {
#ifdef AUDIO_ENABLE
                if (play_sound) { PLAY_SONG(plover_gb_song); }
#endif
                layer_off(_ADJUST);
            }
#ifdef AUDIO_ENABLE
            play_sound = true;
#endif
            break;
        }
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}

// ENCODER
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] =  { ENCODER_CCW_CW(KC_PGDN, KC_PGUP) },
    [_GAME] = { ENCODER_CCW_CW(KC_PGDN, KC_PGUP) },
    [_LOWER] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_RAISE] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [_ADJUST] =  { ENCODER_CCW_CW(RGB_SAD, RGB_SAI) },
    [_MACROS] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif






