#include QMK_KEYBOARD_H

#define _DEF 0
#define _FN  1

#define KC_WDLF LCTL(KC_LEFT)
#define KC_WDRT LCTL(KC_RIGHT)
#define CTL_ESC CTL_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEF] = LAYOUT_60_ansi(
            KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
            KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
            CTL_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCOLON, KC_QUOT,        KC_ENT,  \
            KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT, \
            KC_LCTL, KC_LWIN, KC_LALT,                           KC_SPACE,                            MO(_FN), KC_RALT, KC_RWIN, KC_RCTL),

    [_FN] = LAYOUT_60_ansi(
            _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  \
            _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
            _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,          _______, \
            _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WDLF, KC_PGDN, KC_PGUP, KC_WDRT,                   XXXXXXX, \
            _______, _______, _______,                           KC_MPLY,                              _______, _______, _______, _______),
};
