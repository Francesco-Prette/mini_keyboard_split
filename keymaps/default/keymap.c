// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐ ┌───┬───┬───┬───┬───┬───┐
     * │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │ │ 6 │ 7 │ 8 │ 9 │ 0 │BCK│
     * ├───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┤
     * │TAB│ q │ w │ e │ r │ t │ │ y │ u │ i │ o │ p │ \ │
     * ├───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┤
     * │SHI│ a │ s │ d │ f │ g │ │ h │ j │ k │ l │ ; │ENT│
     * ├───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┤
     * │SHI│ z │ x │ c │ v │ b │ │ n │ m │ , │ . │ / │HOM│
     * ├───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┤
     * │CTL│Win│ALT│FN2│SPA│SPA│ │SPA│LFT│RGT│FN3│FN4│END│
     * └───┴───┴───┴───┴───┴───┘ └───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,             KC_1,       KC_2,          KC_3,    KC_4,       KC_5,           KC_6,         KC_7,    KC_8,        KC_9,       KC_0,       KC_BSPC,
        KC_TAB,             KC_Q,       KC_W,          KC_E,    KC_R,       KC_T,           KC_Y,         KC_U,    KC_I,        KC_O,       KC_P,       KC_BSLS,
        KC_RIGHT_SHIFT,     KC_A,       KC_S,          KC_D,    KC_F,       KC_G,           KC_H,         KC_J,    KC_K,        KC_L,       KC_SCLN,    KC_ENT,
        KC_LEFT_SHIFT,      KC_Z,       KC_X,          KC_C,    KC_V,       KC_B,           KC_N,         KC_M,    KC_COMM,     KC_DOT,     KC_SLSH,    KC_RSFT,
        KC_LEFT_CTRL,       KC_LWIN,    KC_LEFT_ALT,   MO(1),   KC_SPACE,   KC_SPACE,       KC_SPACE,     MO(1),   MO(1),       KC_MINS,    KC_END,     KC_END
    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┐ ┌───┬───┬───┬───┬───┬───┐
     * │`~ │F1 │F2 │F3 │F4 │F5 │ │ F6│ F7│ F8│ F9│F10│DEL│
     * ├───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┤
     * │TAB│F11│F12│ e │ r │ t │ │ y │ u │ i │ o │ p │ \ │
     * ├───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┤
     * │TO2│ a │ s │ d │ f │ g │ │ h │ j │ k │ l │ ' │ENT│
     * ├───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┤
     * │SHI│ z │ x │ c │ v │ b │ │ n │ m │ , │ . │ / │HOM│
     * ├───┼───┼───┼───┼───┼───┤ ├───┼───┼───┼───┼───┼───┤
     * │CTL│Win│ALT│NO │SPA│SPA│ │SPA│NO │NO │NO │NO │END│
     * └───┴───┴───┴───┴───┴───┘ └───┴───┴───┴───┴───┴───┘
     */
    [1] = LAYOUT(
        KC_GRV,             KC_F1,              KC_F2,                  KC_F3,              KC_F4,             KC_F5,       KC_F6,        KC_F7,   KC_F8,                KC_F9,    KC_F10,    KC_DEL,
        KC_TAB,             KC_F11,             KC_F12,                 KC_E,               KC_R,              KC_T,        KC_Y,         KC_U,    KC_I,                 KC_LBRC,  KC_RBRC,   KC_BSLS,
        KC_CAPS_LOCK,       KC_A,               KC_S,                   KC_D,               KC_F,              KC_G,        KC_H,         KC_J,    KC_K,                 KC_L,     KC_QUOT,   KC_ENT,
        KC_LEFT_SHIFT,      KC_Z,               KC_X,                   KC_C,               KC_V,              KC_B,        KC_N,         KC_M,    KC_COMM,              KC_DOT,   KC_SLSH,   KC_HOME,
        KC_LEFT_CTRL,       KC_LWIN,            KC_LEFT_ALT,            KC_NO,              KC_NUM,            KC_SPACE,    KC_NO,        KC_NO,   KC_NO,                KC_NO,    KC_NO,     KC_END
    ),
};
