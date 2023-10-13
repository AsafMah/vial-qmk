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

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { A13, A14, A15, B3, B4, B5 }
#define MATRIX_COL_PINS { A3, A4, A5, A6, B11, A7, B10, A10, B0, A9, A8, B13, B1, B12, B14, B15, B9, B8 }
// #define MATRIX_COL_PINS { A3, A4, A5, A6, B11, A7, B10, A10, B0, A9, A8, B13, B1, B12, B14, B15, B9, B8 }

#define ENCODERS_PAD_A { A2 }
#define ENCODERS_PAD_B { A1 }

#define COMBO_ONLY_FROM_LAYER 0
#define LAYER_STATE_16BIT

#define WS2812_DI_PIN A0

#ifdef RGB_MATRIX_ENABLE
#   define ENABLE_RGB_MATRIX_ALPHAS_MODS
#   define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#   define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#   define ENABLE_RGB_MATRIX_BREATHING
#   define ENABLE_RGB_MATRIX_BAND_SAT
#   define ENABLE_RGB_MATRIX_BAND_VAL
#   define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#   define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#   define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#   define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#   define ENABLE_RGB_MATRIX_CYCLE_ALL
#   define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#   define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#   define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#   define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#   define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#   define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#   define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#   define ENABLE_RGB_MATRIX_DUAL_BEACON
#   define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#   define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#   define ENABLE_RGB_MATRIX_RAINDROPS
#   define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#   define ENABLE_RGB_MATRIX_HUE_BREATHING
#   define ENABLE_RGB_MATRIX_HUE_PENDULUM
#   define ENABLE_RGB_MATRIX_HUE_WAVE
#   define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#   define ENABLE_RGB_MATRIX_PIXEL_FLOW
#   define ENABLE_RGB_MATRIX_PIXEL_RAIN
// Framebuffer Defines	
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS // enable framebuffer effects
#   define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#   define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// Reactive Defines	
#   define RGB_MATRIX_KEYPRESSES // reacts to keypresses
#   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE	
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE	
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE	
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE	
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS	
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS	
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS	
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS	
#   define ENABLE_RGB_MATRIX_SPLASH	
#   define ENABLE_RGB_MATRIX_MULTISPLASH	
#   define ENABLE_RGB_MATRIX_SOLID_SPLASH	
#   define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH	
#endif
