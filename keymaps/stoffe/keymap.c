// Copyright 2021 torbjorn rasmusson (@torbjorn rasmusson)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers { BASE, LAY0, LAY1, LAY2, LAY3, LAY4, LAY5 };

enum custom_keycodes {
  M_NAME = SAFE_RANGE,
  M_CD_DOT,
};

#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO



enum unicode_names {
  SE_AA_H,
  SE_AE_H,
  SE_OE_H,
  SE_AA_L,
  SE_AE_L,
  SE_OE_L,
  UKB,
  UCOFFEE,
  UVOLT,
  UBEER,
  UTHMUP,
  USMIL,
  UBIC,
  UNERD,
  UBUG,
  UPARTY,
  UORHEART,
  UWHALE,
  UBOMB,
  UFACE_ROLLING_EYES,
  THNK
};

const uint32_t PROGMEM unicode_map[] = {
  [SE_AA_H] = 0x00C5,
  [SE_AE_H] = 0x00C4,
  [SE_OE_H] = 0x00D6,
  [SE_AA_L] = 0x00E5,
  [SE_AE_L] = 0x00E4,
  [SE_OE_L] = 0x00F6,
  [UKB]     = 0x2328,   // ⌨
  [UCOFFEE] = 0x2615,   // ☕
  [UVOLT]   = 0x26A1,   // ⚡
  [UBEER]   = 0x1F37B,  // 🍻
  [UTHMUP]  = 0x1F44D,  // 👍
  [USMIL]   = 0x1F642,  // 🙂
  [UBIC]    = 0x1F6B2,  // 🚲
  [UNERD]   = 0x1F913,  // 🤓
  [UBUG]    = 0x1F41B,  // 🐛
  [UPARTY]  = 0x1F389,  // 🎉
  [UORHEART] = 0x1F9E1, // 🧡
  [UWHALE] = 0x1F433,   // 🐳
  [UBOMB] = 0x1F4A3,    // 💣
  [UFACE_ROLLING_EYES] = 0x1F644, // 🙄
  [THNK] = 0x1F914, // 🤔
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [BASE] = LAYOUT(
    // left hand
    KC_Q,  KC_Q, KC_W, KC_F, KC_P, KC_B,
    KC_A,  LGUI_T(KC_A), LALT_T(KC_R), KC_S, KC_T, KC_G,
    KC_A,  KC_Z, KC_X, KC_C, KC_D, RESET,
    	               LT(LAY0, KC_DEL), KC_BSPC, KC_ENT,

    // right hand
    KC_1,  KC_2, KC_3, KC_4, KC_5, KC_6,
    KC_M,  KC_8, KC_C, KC_D, KC_E, KC_F,
    RESET,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_TAB,  KC_SPC, KC_ESC
    ),

    [LAY0] = LAYOUT(
    // left hand
    KC_1,  KC_Q, KC_W, KC_F, KC_P, KC_B,
    KC_A,  KC_A, KC_R, KC_S, KC_T, KC_G,
    KC_A,  KC_Z, KC_X, KC_C, KC_D, RESET,
    	               KC_DEL, KC_BSPC, KC_ENT,

    // right hand
    KC_J,  KC_2, KC_3, KC_4, KC_5, KC_6,
    KC_M,  KC_8, KC_C, KC_D, KC_E, KC_F,
    KC_K,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_TAB,  KC_SPC, KC_ESC
    ),
    [LAY1] = LAYOUT(
    // left hand
    KC_Q,  KC_Q, KC_W, KC_F, KC_P, KC_B,
    KC_A,  KC_A, KC_R, KC_S, KC_T, KC_G,
    KC_A,  KC_Z, KC_X, KC_C, KC_D, RESET,
    	               KC_DEL, KC_BSPC, KC_ENT,

    // right hand
    KC_J,  KC_2, KC_3, KC_4, KC_5, KC_6,
    KC_M,  KC_8, KC_C, KC_D, KC_E, KC_F,
    KC_K,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_TAB,  KC_SPC, KC_ESC
    ),
    [LAY2] = LAYOUT(
    // left hand
    KC_Q,  KC_Q, KC_W, KC_F, KC_P, KC_B,
    KC_A,  KC_A, KC_R, KC_S, KC_T, KC_G,
    KC_A,  KC_Z, KC_X, KC_C, KC_D, RESET,
    	               KC_DEL, KC_BSPC, KC_ENT,

    // right hand
    KC_J,  KC_2, KC_3, KC_4, KC_5, KC_6,
    KC_M,  KC_8, KC_C, KC_D, KC_E, KC_F,
    KC_K,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_TAB,  KC_SPC, KC_ESC
    ),
    [LAY3] = LAYOUT(
    // left hand
    KC_Q,  KC_Q, KC_W, KC_F, KC_P, KC_B,
    KC_A,  KC_A, KC_R, KC_S, KC_T, KC_G,
    KC_A,  KC_Z, KC_X, KC_C, KC_D, RESET,
    	               KC_DEL, KC_BSPC, KC_ENT,

    // right hand
    KC_J,  KC_2, KC_3, KC_4, KC_5, KC_6,
    KC_M,  KC_8, KC_C, KC_D, KC_E, KC_F,
    KC_K,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_TAB,  KC_SPC, KC_ESC
    ),
    [LAY4] = LAYOUT(
    // left hand
    KC_Q,  KC_Q, KC_W, KC_F, KC_P, KC_B,
    KC_A,  KC_A, KC_R, KC_S, KC_T, KC_G,
    KC_A,  KC_Z, KC_X, KC_C, KC_D, RESET,
    	               KC_DEL, KC_BSPC, KC_ENT,

    // right hand
    KC_J,  KC_2, KC_3, KC_4, KC_5, KC_6,
    KC_M,  KC_8, KC_C, KC_D, KC_E, KC_F,
    KC_K,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_TAB,  KC_SPC, KC_ESC
    ),
    [LAY5] = LAYOUT(
    // left hand
    KC_Q,  KC_Q, KC_W, KC_F, KC_P, KC_B,
    KC_A,  KC_A, KC_R, KC_S, KC_T, KC_G,
    KC_A,  KC_Z, KC_X, KC_C, KC_D, RESET,
    	               KC_DEL, KC_BSPC, KC_ENT,

    // right hand
    KC_J,  KC_2, KC_3, KC_4, KC_5, KC_6,
    KC_M,  KC_8, KC_C, KC_D, KC_E, KC_F,
    KC_K,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_TAB,  KC_SPC, KC_ESC
    ),


};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   #ifdef CONSOLE_ENABLE
//     uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
//   #endif
switch (keycode) {
    case M_NAME:
      if (record->event.pressed) {
          SEND_STRING("Kristoffer");
      }
      return false;
      break;
    case M_CD_DOT:
      if (record->event.pressed) {
          SEND_STRING("cd .."SS_TAP(X_ENTER)"");
      }
      return false;
      break;
    }
    return true;
}




// //A description for expressing the layer position in LED mode.
// layer_state_t layer_state_set_user(layer_state_t state) {
// #ifdef RGBLIGHT_ENABLE
//     switch (get_highest_layer(state)) {
//     case BASE:
//     //   rgblight_sethsv_at(HSV_BLUE, 0);
//       rgblight_setrgb_range(HSV_BLUE, 0, 3);
//       break;
//     case LAY0:
//       rgblight_setrgb_range(HSV_RED, 0,3);
//       break;
//     case LAY1:
//       rgblight_setrgb_range(HSV_PURPLE, 0,3);
//       break;
//     default: //  for any other layers, or the default layer
//       rgblight_sethsv_at( 0, 0, 0, 0);
//       break;
//     }
//     // rgblight_set_effect_range( 1, 5);
// #endif
// return state;
// }
