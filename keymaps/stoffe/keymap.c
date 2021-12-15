// Copyright 2021 torbjorn rasmusson (@torbjorn rasmusson)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
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
    [_FN] = LAYOUT(
    // left hand
    KC_A,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_A,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_A,  KC_B, KC_C, KC_D, KC_E, KC_F,
    	               KC_A, KC_B, KC_D,

    // right hand
    KC_A,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_A,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_A,  KC_B, KC_C, KC_D, KC_E, KC_F,
    KC_A,  KC_B, KC_D
    ),
};
