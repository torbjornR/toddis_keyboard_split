// Copyright 2021 torbjorn rasmusson (@torbjorn rasmuss
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


enum layers { BASE, LAY0, LAY1, LAY2, LAY3, LAY4, LAY5 };

enum custom_keycodes {
  M_NAME = SAFE_RANGE,
  M_CD_DOT,
};

// tap dance declarations
enum {
    _TD_KC_SCLN = 0,
    _TD_KC_SLSH = 1,
};

#define TD_KC_SCLN TD(_TD_KC_SCLN)
#define TD_KC_SLSH TD(_TD_KC_SLSH)

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
  THNK,
  PARTY
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
  [PARTY] = 0x1F973, // 🥳
};



#define CTL_KC_I RCTL_T(KC_I)
#define CTL_KC_R LCTL_T(KC_R)

#define SHFT_KC_A LSFT_T(KC_A)
#define SHFT_KC_O RSFT_T(KC_O)

#define CTLZ LCTL(KC_Z)
#define CTLX LCTL(KC_X)
#define CTLC LCTL(KC_C)
#define CTLV LCTL(KC_V)

#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   __  _   _____
//  / _)/_| ( (_
// /(_)(  |__)/__

    [BASE] = LAYOUT(
    // left hand
    KC_ESC,  KC_Q, KC_W, KC_F, KC_P, KC_B,
    KC_LALT,  SHFT_KC_A, CTL_KC_R, KC_S, KC_T, KC_G,
    KC_LWIN,  KC_Z, KC_X, KC_C, KC_D, KC_V,
     LT(LAY0, KC_DEL),LT(LAY1, KC_BSPC),LT(LAY2, KC_TAB),

    // right hand
    KC_J,  KC_L, KC_U, KC_Y, TD_KC_SCLN, _______,
    KC_M,  KC_N, KC_E, CTL_KC_I, SHFT_KC_O, KC_RALT,
    KC_K,  KC_H, KC_COMM, ALGR_T(KC_DOT), TD_KC_SLSH, KC_LWIN,
    LT(LAY3, KC_ENT),  LT(LAY4, KC_SPC), LT(LAY5, KC_ESC)
    ),
//      _        __
//  /  /_|(__/  /  )
// (__(  | /   (__/

    [LAY0] = LAYOUT(
    // left hand6
    RESET,  _______, _______, _______, _______, _______,
    _______,  KC_LSPO, KC_LCTL, KC_LALT, _______, _______,
    _______,  _______, _______, _______, _______, _______,
    	               _______, _______, _______,

    // right hand
    KC_LBRC,  KC_7, KC_8, KC_9, KC_RBRC, _______,
    KC_SCLN,  KC_4, KC_5, KC_6, KC_EQL, _______,
    KC_BSLS,  KC_1, KC_2, KC_3, KC_GRV, _______,
    KC_DOT,  KC_0, KC_MINS
    ),
//      _
//  /  /_|(__/ -/
// (__(  | /   /

    [LAY1] = LAYOUT(
    // left hand
    _______,  _______, _______, _______, _______, _______,
    _______,  KC_LSPO, KC_LCTL, KC_LALT, _______, _______,
    _______,  _______, _______, _______, _______, _______,
    	               _______, _______, _______,

    // right hand
    KC_PGUP, KC_HOME, KC_UP, KC_END, KC_INS, _______,
    KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
    U_RDO,   U_CPY,   U_CUT, U_PST ,U_UND, _______,
    _______,  _______, _______
    ),
//      _       _
//  /  /_|(__/  _)
// (__(  | /   /__

    [LAY2] = LAYOUT(
    // left hand
    _______,  _______, _______, _______, _______, _______,
    _______,  KC_LSPO, KC_LCTL, KC_LALT, _______, _______,
    _______,  _______, _______, _______, _______, _______,
    _______, _______, _______,
    // right hand
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LCBR, KC_RCBR, _______,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, _______,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, _______,
    KC_LPRN, KC_RPRN, KC_UNDS
    ),
//      _       _
//  /  /_|(__/  _)
// (__(  | /   __)

    [LAY3] = LAYOUT(
    // left hand
    _______,  _______, _______, KC_MUTE, _______, KC_VOLU,
    _______,  _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD,
    _______,  _______, _______, _______, _______, _______,
    	               _______, _______, _______,
    // right hand
    _______,KC_F9, KC_F10, KC_F11, KC_F12, _______,
    _______,KC_F5, KC_F6 , KC_F7 , KC_F8 , _______,
    _______,KC_F1, KC_F2 , KC_F3 , KC_F4 , _______,
    KC_TAB,  KC_SPC, KC_ESC

    ),
//      _
//  /  /_|(__/ (_/
// (__(  | /    /

    [LAY4] = LAYOUT(
    // left hand
    _______,  _______, _______, _______, _______, _______,
    _______,  _______, _______, _______, _______, _______,
    _______,  _______, _______, _______, _______, _______,
    	               _______, _______, _______,

    // right hand
    _______,  _______, _______, _______, _______, _______,
    _______,  KC_LSPO, KC_LCTL, KC_LALT, _______, _______,
    _______,  _______, _______, _______, _______, _______,
    	               _______, _______, _______
    ),
//      _       __
//  /  /_|(__/ /_
// (__(  | /   __)

    [LAY5] = LAYOUT(
    // left hand
    X(USMIL),  X(UKB), X(UCOFFEE), X(UVOLT), X(UBEER), X(UTHMUP),
    X(THNK),  X(PARTY), XP(SE_AA_L, SE_AA_H), XP(SE_AE_L, SE_AE_H), XP(SE_OE_L, SE_OE_H), _______,
    X(UBOMB),   X(UORHEART), X(UBIC), X(UNERD),   X(UBUG), X(UPARTY),
    	               _______, _______, _______,

    // right hand
    _______,  _______, _______, _______, _______, RESET,
    _______, X(UWHALE), X(UBOMB), X(UFACE_ROLLING_EYES), X(THNK), _______,
    _______,  _______, _______, _______, _______, _______,
    _______,  _______, _______
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




const rgblight_segment_t PROGMEM my_base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
		{0,4,HSV_OFF}
	);

const rgblight_segment_t PROGMEM my_layer0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0,4,HSV_GREEN}
	);

const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
		{0,4,HSV_ORANGE}
	);

const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
		{0,4,HSV_BLUE}
	);

const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
		{0,4,HSV_PURPLE}
	);

const rgblight_segment_t PROGMEM my_layer4_layer[] = RGBLIGHT_LAYER_SEGMENTS(
		{0,4,HSV_TURQUOISE}
	);

const rgblight_segment_t PROGMEM my_layer5_layer[] = RGBLIGHT_LAYER_SEGMENTS(
		{0,4,HSV_RED}
	);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
		my_base_layer,
		my_layer0_layer,
		my_layer1_layer,
		my_layer2_layer,
		my_layer3_layer,
		my_layer4_layer,
		my_layer5_layer
	);

//Set the appropriate layer color
layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, BASE));
    rgblight_set_layer_state(1, layer_state_cmp(state, LAY0));
    rgblight_set_layer_state(2, layer_state_cmp(state, LAY1));
    rgblight_set_layer_state(3, layer_state_cmp(state, LAY2));
    rgblight_set_layer_state(4, layer_state_cmp(state, LAY3));
    rgblight_set_layer_state(5, layer_state_cmp(state, LAY4));
    rgblight_set_layer_state(6, layer_state_cmp(state, LAY5));
    return state;
}

void keyboard_post_init_user(void) {
	//Enable the LED layers
	rgblight_layers = my_rgb_layers;
}



// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for first parameter, twice for second
    [_TD_KC_SCLN] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, LSFT(KC_SCLN) ),
    [_TD_KC_SLSH] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, LSFT(KC_SLSH) )

};