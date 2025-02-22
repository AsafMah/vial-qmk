/*
Copyright 2021 beanaccle

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW


#ifdef RGB_MATRIX_ENABLE

// The number of LEDs connected
#    define RGB_MATRIX_LED_COUNT 54
#    define DRIVER_LED_TOTAL RGB_MATRIX_LED_COUNT
#    define RGB_MATRIX_SPLIT \
        { 27, 27 }
#define RGBLED_NUM 54
#define RGBLED_SPLIT { 27, 27 }

#endif