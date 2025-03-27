/* 
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, 
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                MT(MOD_LALT, KC_ESC), KC_LSFT,  LT(1, KC_DEL),     MO(2), KC_SPC, MT(MOD_RCTL, KC_BSPC)
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_ESC, KC_LSFT, KC_LALT, KC_DEL, KC_INS, KC_LGUI,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_QUOTE, KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, KC_HOME, KC_END,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                     KC_ESC, KC_LSFT, _______,           MO(3), KC_SPC, MT(MOD_RCTL, KC_BSPC)                                      //`--------------------------'  `--------------------------'

  ),

  [2] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_ESC, KC_TAB, KC_LALT, KC_DEL, XXXXXXX, KC_LGUI,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                    KC_LGUI,  MT(MOD_LSFT, KC_DEL),  LT(3, KC_DEL),     _______, KC_SPC, MT(MOD_RCTL, KC_BSPC)                                      //`--------------------------'  `--------------------------'
  ), 

  [3] = LAYOUT_split_3x5_3(//,-----------------------------------------------------.                    ,-----------------------------------------------------.
  	KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                          KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_ESC, XXXXXXX, KC_F11, KC_F12, XXXXXXX, XXXXXXX,                     KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, KC_VOLU, KC_ENT, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_CAPS, XXXXXXX, XXXXXXX,                      KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,  KC_SPC, _______,     _______, KC_ENT, KC_RALT
                                    //`--------------------------'  `--------------------------'
  )
};