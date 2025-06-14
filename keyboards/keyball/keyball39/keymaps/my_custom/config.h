/* Copyright 2022 @Yowkees
 * Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)
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

#pragma once

// Via/REMAP設定
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// Combo設定
#define COMBO_COUNT 16
#define COMBO_TERM 40                 
#define COMBO_MUST_TAP_PER_COMBO      // Mod-Tapキーでもコンボを優先（重要！）
#define COMBO_STRICT_TIMER               // タイマーを厳密に（重要！）

// Mod-Tap設定（中指・人差し指に最適化）
#define TAPPING_TERM 1000              // 標準的な値
#define TAPPING_TERM_PER_KEY          // キーごとの微調整
#define QUICK_TAP_TERM 100            // 高速連打対応
#define PERMISSIVE_HOLD               // 既存設定を維持

// Auto Mouse Layer設定
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 1
#define AUTO_MOUSE_LAYER_KEEP_TIME 30000
#define AML_ACTIVATE_THRESHOLD 70

// トラックボール設定
#define POINTING_DEVICE_TASK_THROTTLE_MS 8