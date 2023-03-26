// Copyright 2023 WSMao (@WSMao)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


#define MATRIX_ROWS 2
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS {B1, B3}
#define MATRIX_COL_PINS {D2, D3, D4}

#define DIODE_DIRECTION COL2ROW
