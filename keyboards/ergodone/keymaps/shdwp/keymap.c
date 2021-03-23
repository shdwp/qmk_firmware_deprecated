#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD
};


#define BASE 0
#define QWER 1
#define PROG 2
#define FN 3
#define WIND 4
#define TABBING 5

#define UKR_1 LALT(LCTL(KC_RBRACKET))
#define UKR_2 LALT(LCTL(KC_R))
#define UKR_3 LALT(LCTL(KC_QUOTE))
#define UKR_4 LALT(LCTL(KC_GRAVE))

#define PROG_1 LT(PROG, KC_ESC)
#define M_CHLG LSFT(KC_LCTRL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /**
     *
     *                                                     BASE
     *
     */
    [BASE] = LAYOUT_ergodox(
        // left hand
        KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                   _______,
        KC_DQUO,        KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                   M_CHLG,
        KC_TAB,         KC_A,           KC_R,           KC_S,           KC_T,           KC_G,
        LSFT_T(KC_ESC), KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                   KC_ENT,
                                        _______,        UKR_1,          UKR_2,          PROG_1,                 LM(TABBING, MOD_LALT),

                                                                                                    _______,                _______,
                                                                                                                            _______,
                                                                            LM(TABBING, MOD_LCTL),  LSFT_T(KC_ESC),         KC_DEL,

        // right hand
        _______,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSLASH,
        KC_LGUI,        KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_BSPACE,
                        KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,
        KC_ENT,         KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,
                                        PROG_1,         _______,        UKR_3,          UKR_4,          TG(QWER),

                                                                                        _______,            _______,
                                                                                                            _______,
                                                                        _______,        LT(WIND, KC_ENT),   LT(FN, KC_SPACE)
    ),

    /**
     *
     *                                                     QWERTY
     *
     */
    [QWER] = LAYOUT_ergodox(
        // left hand
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           _______,
        _______,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,
        _______,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                       _______,         _______,        _______,

        // right hand
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           _______,
                        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      _______,
        _______,        KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______
    ),

    /**
     *
     *                                                     PROGRAMMING SYMBOLS
     *
     */
    [PROG] = LAYOUT_ergodox(
        // left hand
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         _______,        _______,
        _______,        KC_LPRN,        KC_RPRN,        KC_LCBR,        KC_RCBR,        KC_PERC,
        _______,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                       _______,         _______,        _______,

        // right hand
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        LSFT(KC_BSLASH),KC_AMPR,        KC_ASTR,        KC_LABK,        KC_RABK,        _______,
                        KC_CIRC,        KC_SCOLON,      KC_EQUAL,       KC_LBRACKET,    KC_RBRACKET,    _______,
        _______,        _______,        KC_UNDS,        KC_PLUS,        _______,        _______,        _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______
    ),

    /**
     *
     *                                                     MEDIA FUNCTIONS
     *
     */
    [FN] = LAYOUT_ergodox(
        // left hand
        KC_AUDIO_VOL_UP,    KC_MEDIA_PREV_TRACK,    KC_MEDIA_PLAY_PAUSE,    KC_MEDIA_NEXT_TRACK,    _______,        _______,        _______,
        KC_AUDIO_VOL_DOWN,  _______,                LCTL(KC_LEFT),          KC_UP,                  LCTL(KC_RIGHT), KC_PGUP,        KC_HOME,
        LSFT(KC_TAB),       _______,                KC_LEFT,                KC_DOWN,                KC_RIGHT,       KC_PGDOWN,
        _______,            _______,                _______,                _______,                _______,        _______,        KC_END,
                                                    _______,                _______,                _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                       _______,         _______,        _______,

        // right hand
        _______,        _______,        _______,        _______,        _______,        _______,        KC_LOCK,
        _______,        KC_MS_WH_UP,    _______,        KC_MS_UP,       _______,        _______,        _______,
                        KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    _______,        _______,
        _______,        KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, _______,        _______,        _______,        _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______
    ),

    /**
     *
     *                                                     WINDOWS FUNCTIONS
     *
     */
    [WIND] = LAYOUT_ergodox(
        // left hand
        _______,        KC_F1,          KC_F2,          KC_F3,            KC_F4,          KC_F5,          _______,
        _______,        LALT(KC_F4),    _______,        LGUI(KC_UP),      _______,        _______,        _______,
        _______,        _______,        LGUI(KC_LEFT),  LGUI(KC_DOWN),    LGUI(KC_RIGHT), _______,
        _______,        _______,        _______,        LGUI(LSFT(KC_S)), _______,        _______,        _______,
                                        _______,        _______,          _______,        _______,        _______,

                                                                                          _______,        _______,
                                                                                                          _______,
                                                                          _______,        _______,        _______,

        // right hand
        _______,        KC_F6,          KC_F7,          KC_F8,           KC_F9,         KC_F10,         KC_F11,
        _______,        _______,        _______,        _______,         _______,       _______,        KC_F12,
                        _______,        _______,        _______,         _______,       _______,        _______,
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
                                        _______,        _______,         _______,       _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______
    ),

    /**
     *
     *                                                     ALT TABBING
     *
     */
    [TABBING] = LAYOUT_ergodox(
        // left hand
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,
        KC_LSHIFT,      _______,        _______,        _______,        _______,        _______,        _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______,

        // right hand
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
                        _______,        _______,        _______,         _______,       _______,        _______,
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
                                        _______,        _______,         _______,       _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______
    ),

    /*
    [TABBING] = LAYOUT_ergodox(
        // left hand
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______,

        // right hand
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
                        _______,        _______,        _______,         _______,       _______,        _______,
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
                                        _______,        _______,         _______,       _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______
    ),
    */
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    ergodox_board_led_off();

    if ((layer & 1) != 0) {
        ergodox_board_led_on();
    }
};
