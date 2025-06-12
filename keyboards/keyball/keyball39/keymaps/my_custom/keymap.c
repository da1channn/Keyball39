// ================ 【最終修正版】EEPROMリセット専用キーマップ ここから ================
#include QMK_KEYBOARD_H

// EEPROMクリア用のカスタムキーコードを定義
enum custom_keycodes {
    EEPROM_CLEAR = SAFE_RANGE
};

// レイヤー定義
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    // Qの位置にEEPROM_CLEARキーを配置。キーの数をKeyball39の定義に正確に合わせます。
    // Left Hand (15 keys)
    EEPROM_CLEAR, KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,

    // Right Hand (15 keys)
    KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,

    // Thumb Cluster (12 keys)
    KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  )
};

// EEPROM_CLEARキーが押されたときの処理
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EEPROM_CLEAR:
      if (record->event.pressed) {
        ee_clear();
      }
      return false;
  }
  return true;
}

#ifdef COMBO_ENABLE
// コンパイルエラーを回避するため、空のコンボ定義を追加
combo_t key_combos[] = {};
#endif

// このテストでは不要なため、以下の関数は空にします
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) { return TAPPING_TERM; }
bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) { return true; }
#ifdef OLED_ENABLE
#    include "lib/oledkit/oledkit.h"
void oledkit_render_info_user(void) {}
#endif
// ================ 【最終修正版】EEPROMリセット専用キーマップ ここまで ================