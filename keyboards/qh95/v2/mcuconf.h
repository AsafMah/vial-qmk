// Copyright 2022 dvermd (@dvermd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <mcuconf.h>

#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 TRUE

// #undef STM32_PWM_USE_ADVANCED
// #define STM32_PWM_USE_ADVANCED TRUE

// #undef STM32_PWM_USE_TIM1
// #define STM32_PWM_USE_TIM1 TRUE
