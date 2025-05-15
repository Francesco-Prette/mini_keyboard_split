// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │
     * ├───┼───┼───┼───┼───┼───┤
     * │TAB│ q │ w │ e │ r │ t │
     * ├───┼───┼───┼───┼───┼───┤
     * │SHI│ a │ s │ d │ f │ g │
     * ├───┼───┼───┼───┼───┼───┤
     * │SHI│ z │ x │ c │ v │ b │
     * ├───┼───┼───┼───┼───┼───┘
     * │CTL│Win│ALT│FN2│SPA│
     * └───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_R, KC_L, KC_R, KC_L,
        KC_2, KC_3, KC_2, KC_3
    ),
};
