#include QMK_KEYBOARD_H


#define QWERTY 0
#define NAV    1
#define SYM    2
#define NUM    3
#define MCR    4
//
// Home row mods for QWERTY layer.
#define HOME_A   LGUI_T(KC_A)
#define HOME_S   LALT_T(KC_S)
#define HOME_D   LCTL_T(KC_D)
#define HOME_F   LSFT_T(KC_F)
#define HOME_J   RSFT_T(KC_J)
#define HOME_K   RCTL_T(KC_K)
#define HOME_L   LALT_T(KC_L)
#define HOME_SC  LGUI_T(KC_SCLN)
#define HOME_Z   LT(SYM, KC_Z)
#define HOME_X   LT(SYM, KC_X)
#define HOME_SL  LT(SYM, KC_SLASH)
#define HOME_DOT  LT(SYM, KC_DOT)
#define LT_NAV   LT(NAV, KC_TAB)
#define LT_SYM   LT(SYM, KC_RALT)
#define LT_NUM   LT(NUM, KC_LGUI)
#define LT_MCR   LT(MCR, KC_APP)
#define OSM_LGUI OSM(MOD_LGUI)
#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_LCTL OSM(MOD_LCTL)
#define OSM_LALT OSM(MOD_LALT)
#define OSM_MEH  OSM(MOD_MEH)
#define UNDO     LCTL(KC_Z)
#define REDO     RCS(KC_Z)
#define CUT      LCTL(KC_X)
#define COPY     LCTL(KC_C)
#define PASTE    LCTL(KC_V)
#define CTL_G    LCTL(KC_G)
#define BS_WORD  LCTL(KC_BSPC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[QWERTY] = LAYOUT(
                                                                  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
                                                                      KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_BSPC,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                                                                      KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_DEL,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                                                                      CTL_G,   HOME_A,  HOME_S,  HOME_D,  HOME_F,   KC_G,                               KC_H,   HOME_J,  HOME_K,  HOME_L,  HOME_SC, KC_QUOT,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
                                                                     CW_TOGG,  KC_Z,   HOME_X,    KC_C,    KC_V,    KC_B,   KC_BSPC,          KC_ESC,   KC_N,    KC_M,   KC_COMM,HOME_DOT, KC_SLASH, CW_TOGG,
                                                                  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                                                                                    LT_NUM,   LT_NAV,  KC_SPC,                   SC_SENT,  LT_SYM,  LT_MCR
                                                                                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
),

[NAV] = LAYOUT(
                                                                  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
                                                                     TG(1), KC_PSCR,  KC_HOME, KC_PGUP, KC_INS, KC_PAUS,                            KC_ACL0, KC_ACL1, KC_ACL2, KC_MUTE, KC_VOLD, KC_VOLU,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                                                                      KC_TRNS, KC_SCRL, KC_END,  KC_PGDN, KC_DEL, CW_TOGG,                             KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_MPRV, KC_MNXT,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                                                                      KC_TRNS,OSM_LGUI,OSM_LSFT,OSM_LCTL,OSM_LALT,OSM_MEH,                            KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, KC_MPLY, KC_MSTP,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
                                                                     KC_TRNS,  UNDO,    CUT,     COPY,    PASTE,   REDO,    KC_TRNS,          KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_BTN4, KC_BTN5,
                                                                  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                                                                                    KC_TRNS, KC_TRNS, KC_TRNS,                    KC_BTN1, KC_BTN2, KC_BTN3
                                                                                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
),

[SYM] = LAYOUT(
                                                                  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
                                                                     TG(2),  KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,                             KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                                                                       KC_TAB, KC_GRV,  KC_LT,   KC_GT,   KC_DQUO, KC_DOT,                            KC_AMPR,  KC_EQL, KC_LBRC, KC_RBRC, KC_RPRN,  KC_F12,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                                                                     KC_TRNS, KC_EXLM, KC_MINS,  KC_PLUS, KC_EQL,  KC_HASH,                           KC_PIPE, KC_COLN, KC_LPRN, KC_RPRN,  KC_AT,   KC_NO,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
                                                                     KC_TRNS, KC_CIRC, KC_SLSH, KC_ASTR, KC_BSLS, KC_UNDS, BS_WORD,           KC_TRNS, KC_TILD,  KC_DLR, KC_LCBR, KC_RCBR, KC_QUES,  KC_NO,
                                                                  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                                                                                     KC_TRNS, TT(NUM), KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                                                                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
),

[NUM] = LAYOUT(
                                                                  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
                                                                     TG(3), RGB_TOG, RGB_MOD, RGB_RMOD, RGB_VAD, RGB_VAI,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                                                                     KC_TRNS, BL_TOGG, BL_STEP,  BL_ON,    BL_UP,  BL_DOWN,                            KC_PAST,  KC_7,    KC_8,    KC_9,   KC_PSLS, KC_TRNS,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                                                                     KC_TRNS, KC_LGUI, KC_LSFT, KC_LCTL, KC_LALT, KC_TRNS,                             KC_MINS,  KC_4,    KC_5,    KC_6,   KC_PPLS, KC_TRNS,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
                                                                     KC_TRNS,   UNDO,    CUT,     COPY,   PASTE,   REDO,    KC_TRNS,         KC_TRNS, KC_TRNS,   KC_1,    KC_2,    KC_3,   KC_EQL,  KC_PENT,
                                                                  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                                                                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,  KC_DOT,   KC_0
                                                                                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
),
[MCR] = LAYOUT(
                                                                  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
                                                                      0x7c70,  KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  QK_BOOT,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                                                                      0x7c71,  KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   EE_CLR,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                                                                      0x7c72,  KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  QK_MAKE,
                                                                  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
                                                                      KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                                                  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                                                                                      KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,  KC_NO
                                                                                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
)
};


#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)


// COMBOS
const uint16_t PROGMEM ui_esc[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM gk_f12[] = {KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM bs_word[] = {KC_C, KC_COMM, COMBO_END};
combo_t key_combos[] = {
    COMBO(ui_esc, KC_ESC),
    COMBO(gk_f12, KC_F12),
    COMBO(bs_word, BS_WORD),
};

// Achordeon https://getreuer.info/posts/keyboards/achordion/index.html#add-achordion-to-your-keymap
// https://github.com/getreuer/qmk-keymap

#include "features/achordion.h"

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }
  // Your macros ...

  return true;
}

void matrix_scan_user(void) {
  achordion_task();
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    // Increase the tapping term a little for slower ring and pinky fingers.
    case HOME_Z:
    case HOME_X:
    case HOME_A:
    case HOME_S:
    case HOME_L:
    case HOME_SC:
    case HOME_SL:
    case HOME_DOT:
      return TAPPING_TERM + 15;

    default:
      return TAPPING_TERM;
  }

}uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t* record) {
  // If you quickly hold a tap-hold key after tapping it, the tap action is
  // repeated. Key repeating is useful e.g. for Vim navigation keys, but can
  // lead to missed triggers in fast typing. Here, returning 0 means we
  // instead want to "force hold" and disable key repeating.
  switch (keycode) {
    // Repeating is useful for Vim navigation keys.
    case HOME_J:
    case HOME_K:
    case HOME_L:
    case HOME_SC:
      return QUICK_TAP_TERM;  // Enable key repeating.
    default:
      return 0;  // Otherwise, force hold and disable key repeating.
  }
}

bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                     uint16_t other_keycode, keyrecord_t* other_record) {
  // Exceptionally consider the following chords as holds, even though they
  // are on the same hand
  switch (tap_hold_keycode) {
    case LT_NAV:
    case LT_SYM:
    case LT_NUM:
      return true;
      break;
  }

  // Also allow same-hand holds when the other key is in the rows below the
  // alphas. I need the `% (MATRIX_ROWS / 2)` because my keyboard is split.
  if (other_record->event.key.row % (MATRIX_ROWS / 2) >= 4) {
    return true;
  }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  return 800;  // Use a timeout of 800 ms.
}

uint16_t achordion_streak_timeout(uint16_t tap_hold_keycode) {
  if (IS_QK_LAYER_TAP(tap_hold_keycode)) {
    return 0;  // Disable streak detection on layer-tap keys.
  }

  // Otherwise, tap_hold_keycode is a mod-tap key.
  uint8_t mod = mod_config(QK_MOD_TAP_GET_MODS(tap_hold_keycode));
  if ((mod & MOD_LSFT) != 0) {
    return 0;  // Disable for Shift mod-tap keys.
  } else {
    return 100;
  }
}
