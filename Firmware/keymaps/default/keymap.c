// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_UP, KC_SPACE, KC_UP
    )
};

#ifdef OLED_ENABLE

bool oled_task_user(void) {
    oled_write_P(PSTR("Jump"), false);
    return false;
}

#endif