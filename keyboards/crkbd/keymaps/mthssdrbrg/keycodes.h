#pragma once

enum layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST,
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  RGBRST,
};

#define LCTL_ESC MT(MOD_LCTL, KC_ESC)
#define SFT_QT MT(MOD_RSFT, KC_QUOT)

#define SFT_SCLN MT(MOD_RSFT, KC_SCLN)
#define CTL_SLSH MT(MOD_RCTL, KC_SLSH)

#define RAI_TAB LT(_RAISE, KC_TAB)

#define LOW_SPC LT(_LOWER, KC_SPC)
#define LOW_ENT LT(_LOWER, KC_ENT)

#define ADJ_GRV LT(_ADJUST, KC_GRV)
