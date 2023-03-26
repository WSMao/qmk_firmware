// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later



#include QMK_KEYBOARD_H

#define LAYOUT( \
    k00, k01, \
    k10, k11, k12 \
    ) \
    { \
        { k00, k01, KC_NO}, \
        { k10, k11, k12  } \
    }

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_0 
    )
};
