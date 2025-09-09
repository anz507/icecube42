#include QMK_KEYBOARD_H

#define KC_BACK LGUI(KC_Z)
#define KC_FORWARD LGUI(LSFT(KC_Z))

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (get_mods() & MOD_MASK_CTRL) {  // If Ctrl is held
      if (clockwise) {
          unregister_code(KC_LCTL);
          tap_code16(KC_FORWARD);  // Redo
          register_code(KC_LCTL);
      } else {
          unregister_code(KC_LCTL);
          tap_code16(KC_BACK);  // Undo
          register_code(KC_LCTL);
      }
  } else if (get_mods() & MOD_MASK_ALT) {  // If Alt is held
      if (clockwise) {
          unregister_code(KC_LALT);
          tap_code(KC_RBRC);  // Close Bracket 
          register_code(KC_LALT);
      } else {
          unregister_code(KC_LALT);
          tap_code(KC_LBRC);  // Open Bracket
          register_code(KC_LALT);
      }
  } else {  // Normal Volume Control
      if (clockwise) {
          tap_code(KC_VOLU);  // Volume Up
      } else {
          tap_code(KC_VOLD);  // Volume Down
      }
  }
  return false;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  return state;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_icecube42(
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_BSPC,
      KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  MO(1),  KC_MUTE,
      KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  MO(2),   MO(3),  KC_LCTL,  KC_LALT
    ),
    [1] = LAYOUT_icecube42(
      QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP,   KC_NO, KC_NO, KC_DEL,
      KC_LCAP, KC_MNXT, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,
      KC_LSFT, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_HOME, KC_END,  KC_PGUP, KC_PGDN, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [2] = LAYOUT_icecube42(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PIPE,
      KC_NO, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,
      KC_LSFT, KC_NO, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_COLN, KC_DQUO, KC_QUES, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [3] = LAYOUT_icecube42(
      KC_TILDE,KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS,
      KC_NO, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR,
      KC_LSFT, RGB_VAI, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_QUOT, KC_SLSH, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
};