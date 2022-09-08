#include QMK_KEYBOARD_H


#define _COLEMAK 0
#define _LAYER_1 1
#define _LAYER_2 2
#define _LAYER_3 3

enum custom_keycodes {
  COLEMAK = SAFE_RANGE,
  LAYER_1,
  LAYER_2,
  LAYER_3
};

// enum {
//    TS_MAIN,
//   TS_L1,
//   TS_L2
// };

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
   //  [TS_MAIN] = ACTION_TAP_DANCE_LAYER_MOVE(COLEMAK, COLEMAK),
   //  [TS_L1] = ACTION_TAP_DANCE_LAYER_MOVE(LAYER_1, LAYER_1),
   //  [TS_L2] = ACTION_TAP_DANCE_LAYER_MOVE(LAYER_2, LAYER_2)

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_HOME,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_BSPC,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_R,  LALT_T(KC_S), LGUI_T(KC_T),    KC_G,               KC_M,    RGUI_T(KC_N),    RALT_T(KC_E),    KC_I,    KC_O, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_HOME,          KC_END,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO, KC_SPC,   KC_LSFT,                    KC_RCTL,  KC_ENT, TO(_LAYER_1)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LAYER_1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     RGB_TOG, RGB_MOD, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_ESC,   KC_AT,  KC_HASH,  KC_DLR, KC_PERC,                           KC_CIRC,  KC_AMPR, KC_ASTR, MT(KC_SCLN,KC_COLN), KC_BSPC,    _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  KC_UNDS, KC_KP_EQUAL, KC_DQUO, KC_QUOT, LSFT(KC_GRV),                            KC_BSLS, KC_LCBR,  KC_RCBR, KC_PIPE,  KC_ENT, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_TILD, KC_CUT, KC_COPY, KC_PASTE, KC_PMNS, KC_TRNS,          KC_TRNS, KC_LBRC, KC_LPRN,  KC_RPRN,   KC_RBRC, TO(_LAYER_3), _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    TO(_COLEMAK), KC_TRNS, KC_TRNS,                    KC_TRNS,  KC_TRNS, TO(_LAYER_2)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LAYER_2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  QK_BOOTLOADER,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_ESC, KC_MPLY,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK, KC_UNDS,                            KC_PMNS, KC_P7, KC_P8, KC_P9, KC_BSPC, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_TAB,_______, KC_VOLD, KC_VOLU, KC_PPLS,                            KC_EQL,  KC_P4, KC_P5, KC_P6, KC_ENT, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  _______, KC_PAST, KC_BRID, KC_BRIU, KC_PDOT, _______,          _______, KC_P0, KC_P1,  KC_P2, KC_P3, TO(_LAYER_3), _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, KC_LGUI,                   _______, _______, TO(_LAYER_1)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LAYER_3] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_MS_WH_LEFT,  KC_MS_UP,     KC_MS_WH_RIGHT, _______,           _______, _______, KC_UP, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______,  KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT,MT(MOD_LGUI,KC_DEL),     _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_MS_BTN2,KC_MS_WH_UP,  KC_MS_WH_DOWN, KC_TRANSPARENT, _______,    _______, KC_MS_BTN1, _______, _______, _______, _______, _______, 
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    TO(_COLEMAK), _______, _______,                   _______, _______, TO(_LAYER_1)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;
    case LAYER_1:
      if (record->event.pressed) {
        layer_on(_LAYER_1);
        update_tri_layer(_LAYER_1, _LAYER_2, _LAYER_3);
      } else {
        layer_off(_LAYER_1);
        update_tri_layer(_LAYER_1, _LAYER_2, _LAYER_3);
      }
      return false;
      break;
    case LAYER_2:
      if (record->event.pressed) {
        layer_on(_LAYER_2);
        update_tri_layer(_LAYER_1, _LAYER_2, _LAYER_3);
      } else {
        layer_off(_LAYER_2);
        update_tri_layer(_LAYER_1, _LAYER_2, _LAYER_3);
      }
      return false;
      break;
    case LAYER_3:
      if (record->event.pressed) {
        layer_on(_LAYER_3);
      } else {
        layer_off(_LAYER_3);
      }
      return false;
      break;
  }
  return true;
}
