// Copyright 2021 torbjorn rasmusson (@torbjorn rasmusson)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_swedish.h"


// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _LAY0,
    _LAY1
};

enum tapdance {
	TD_A_AA,
	TD_A_AO,
	TD_O_OE,
	TD_O_SUP,
	TD_RSFT_DEL
};

enum unicode_names {
	SE_AA_H,
	SE_AE_H
};

const uint32_t PROGMEM unicode_map[] = {
	[SE_AA_H] = 0x00C5,
	[SE_AE_H] = 0x00C4,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_A_AA] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_LBRC),
    [TD_O_SUP] = ACTION_TAP_DANCE_DOUBLE(KC_O, KC_LCMD),
    [TD_RSFT_DEL] = ACTION_TAP_DANCE_DOUBLE(KC_RSFT, KC_DEL),
    [TD_A_AO] = ACTION_TAP_DANCE_DOUBLE(KC_COMM, KC_QUOT),
    [TD_O_OE] = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_SCLN),

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
    // left hand
    
    KC_TAB,   KC_QUOT,    KC_COMM,      KC_DOT, KC_P, KC_Y,
    KC_ESC,   KC_A,           TD(TD_O_SUP), KC_E,   	KC_U, 	KC_I,
    KC_LSFT,  KC_SCOLON,      KC_Q,         KC_J,   KC_K, KC_X,
    			      KC_LALT,      KC_LCTRL, LT(_LAY0, KC_HOME),

    // right hand 
    KC_F,  KC_G, KC_C, KC_R, KC_L, KC_SLSH,
    KC_D,  KC_H, KC_T, KC_N, KC_S, KC_MINS,
    KC_B,  KC_M, KC_W, KC_V, KC_Z, TD(TD_RSFT_DEL),   
    KC_ENT,  KC_SPC, KC_BSPC

    ),
    [_LAY0] = LAYOUT(
    // left hand 
    KC_NO,   KC_NO, KC_LBRC,   KC_UP,   KC_RBRC,   KC_NO,
    KC_NO,   KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,
    KC_LSFT, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
    	                     KC_NO,   KC_NO,   KC_NO,

    // right hand 
    KC_NO,  KC_7, KC_8, KC_9, KC_NO, KC_NO,
    KC_NO,  KC_4, KC_5, KC_6, KC_NO, KC_NO,
    KC_NO,  KC_1, KC_2, KC_3, KC_NO, KC_RSFT,
    KC_0,  KC_NO, KC_NO
    ),
    
    [_LAY1] = LAYOUT(
    // left hand 
    KC_A,  KC_B, KC_LBRC, KC_UP,   KC_RBRC, KC_F,
    KC_A,  KC_B, KC_LEFT, KC_DOWN, KC_RGHT, KC_F,
    KC_A,  KC_B, KC_C,    KC_D,    KC_E,    KC_F,
    	                  KC_A,    KC_B,    KC_D,

    // right hand 
    KC_A,  KC_7, KC_8, KC_9, KC_E, KC_F,
    KC_A,  KC_4, KC_5, KC_6, KC_E, KC_F,
    KC_A,  KC_1, KC_2, KC_3, KC_E, KC_F,
    KC_0,  KC_B, KC_0
    ),

};


const rgblight_segment_t PROGMEM my_base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
		{0, 4, HSV_PURPLE}
);

const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
		{0, 4, HSV_RED}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
	my_base_layer,
	my_layer1_layer	
);


layer_state_t layer_state_set_user(layer_state_t state) {
	rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
	rgblight_set_layer_state(1, layer_state_cmp(state, _LAY0));
	rgblight_set_layer_state(2, layer_state_cmp(state, _LAY1));
	return state;
}

void keyboard_post_init_user(void) {
	rgblight_layers = my_rgb_layers;
}
