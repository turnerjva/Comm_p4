// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _______ KC_TRNS
//#define GRAVE_MODS  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

//Each layer gets a name for ereadability, which is then used in the keymap matrix below
#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _BL: Base Layer (Default Layer)
     */
    [_BL] = LAYOUT_p4(
       MO(_FL),       KC_ESCAPE,       KC_LGUI,       LCA(KC_DEL),                                           \
	KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL,       KC_BACKSPACE, KC_DELETE, \
	KC_TAB,       KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_INSERT, \
	KC_CAPS,       KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,             \
	      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,       KC_RSFT,             \
	                                    KC_SPC,                   KC_RALT, KC_RCTL),
                                        
    /*Keymap _FL: Function Layer
    */
   [_FL] = LAYOUT_p4(
   MO(_FL),       KC_HOME,       KC_SCRL,       KC_END,                                           \
	_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,       _______, _______, \
	_______,       _______, _______, _______, _______, _______, _______, KC_PGUP, _______, _______, KC_PSCR, _______, _______, _______, _______, \
	_______,       _______, KC_PGDN, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             \
	      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______,             \
	                                    _______,                   _______, _______),
};

/* This is a list of user defined functions. F(N) corresponds to item N
   of this list.
 */