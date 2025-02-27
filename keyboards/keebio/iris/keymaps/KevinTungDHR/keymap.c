#include QMK_KEYBOARD_H


#define _BASE 0
#define _EXT 1
#define _SYM 2
#define _FUN 3
#define _SYM2 4


enum custom_keycodes {
  BASE = SAFE_RANGE,
  EXT,
  SYM,
  FUN,
  SYM2
};


// enum {
//    TS_MAIN,
//   TS_L1,
//   TS_L2
// };

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
   //  [TS_MAIN] = ACTION_TAP_DANCE_LAYER_MOVE(BASE, BASE),
   //  [TS_L1] = ACTION_TAP_DANCE_LAYER_MOVE(EXT, EXT),
   //  [TS_L2] = ACTION_TAP_DANCE_LAYER_MOVE(SYM, SYM)

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______,  _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_CAPS,  KC_A,      KC_R,   KC_S,    KC_T,   KC_G,                                KC_M,   KC_N,    KC_E,      KC_I,   KC_O,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    _______,          _______,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    MO(_FUN), MO(_EXT), KC_LSFT,                 KC_SPC, MO(_SYM), MO(_SYM2)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_EXT] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_ESC,   KC_WBAK, KC_FIND,  KC_WFWD, KC_INSERT,                         KC_PGUP,  KC_HOME, KC_UP, KC_END, KC_CAPS,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),     KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT,  KC_DEL, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_UNDO, LCTL(KC_X), LCTL(KC_C), KC_RGUI, LCTL(KC_V), _______,          _______, KC_PSCR, KC_BSPC, KC_TAB,LCTL(KC_Z), KC_ENT, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______,_______, _______,                      KC_ENT, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SYM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______,  _______, _______, _______, _______, _______,                            _______, _______, _______, _______,  _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_EXLM, KC_AT,   KC_HASH, KC_COLN, KC_SCLN,                             KC_EQL,  KC_7,    KC_8,   KC_9,  KC_PPLS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_BSLS,  KC_PIPE, KC_LCBR, KC_LPRN, KC_LBRC,                            KC_ASTR,  KC_4,   KC_5,   KC_6,  KC_PMNS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  KC_PMNS, KC_UNDS, KC_RCBR, KC_RPRN, KC_RBRC, _______,          _______, KC_0,   KC_1,    KC_2,   KC_3,  KC_SLSH, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FUN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_MSTP, KC_MPRV,  KC_MPLY,  KC_MNXT, KC_BRIU,                          KC_F12,   KC_F7,   KC_F8,    KC_F9, RCTL(KC_LBRC), _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_BRID,        KC_F11,  KC_F4,    KC_F5,   KC_F6,  RCTL(KC_PMNS), _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_MUTE, KC_VOLD, LCTL(LSFT(KC_C)), KC_VOLU, LCTL(LSFT(KC_V)), _______,    _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,  RCTL(KC_P0), _______, 
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                    KC_ENT, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

    [_SYM2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______,  _______, _______, _______, _______, _______,                            _______, _______, _______, _______,  _______, QK_BOOTLOADER,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_EXLM, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, _______,                      _______,  KC_AMPR,    KC_GRV,   KC_TILD,  _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_BSLS,  KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______,                  _______,  KC_DLR,   KC_PERC,   KC_CIRC, _______ , _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  _______, KC_MS_BTN3, KC_MS_BTN4, KC_MS_BTN5, _______, _______,      _______, _______,   KC_EXLM, KC_AT,   KC_HASH,  KC_SLSH, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    TO(_BASE), TO(_EXT), _______,                   _______, TO(_SYM), TO(_FUN)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case BASE:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_BASE);
      }
      return false;
      break;
    case EXT:
      if (record->event.pressed) {
        layer_on(_EXT);
        update_tri_layer(_EXT, _SYM, _FUN);
      } else {
        layer_off(_EXT);
        update_tri_layer(_EXT, _SYM, _FUN);
      }
      return false;
      break;
    case SYM:
      if (record->event.pressed) {
        layer_on(_SYM);
        update_tri_layer(_EXT, _SYM, _FUN);
      } else {
        layer_off(_SYM);
        update_tri_layer(_EXT, _SYM, _FUN);
      }
      return false;
      break;
    case FUN:
      if (record->event.pressed) {
        layer_on(_FUN);
      } else {
        layer_off(_FUN);
      }
      return false;
      break;
  }
  return true;
}
