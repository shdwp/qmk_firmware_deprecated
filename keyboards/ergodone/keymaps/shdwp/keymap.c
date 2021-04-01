#include "ergodone.h"
#include "version.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD
};

#define BASE 0
#define QWER 1
#define GAME 2
#define INTL 3

#define PROG 10
#define TABBING 11
#define FN 12
#define WIND 13

#define INTL_MOD LALT(KC_LCTL)

#define PROG_1 MO(PROG)
#define M_CHLG LSFT(KC_LCTRL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /**
     *
     *                                                     BASE
     *
     */
    [BASE] = LAYOUT_ergodox(
        // left hand
        _______,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                   _______,
        KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                   KC_LGUI,
        KC_ENT,         KC_A,           KC_R,           KC_S,           KC_T,           KC_G,
        LSFT_T(KC_ESC), KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                   M_CHLG,
                                        KC_GRAVE,       KC_RBRACKET,    _______,        LM(TABBING, MOD_LALT),  LT(FN, KC_SPACE),

                                                                                                    TG(GAME),               TG(QWER),
                                                                                                                            _______,
                                                                            LM(TABBING, MOD_LCTL),  PROG_1,                 KC_DEL,

        // right hand
        _______,        KC_6,           KC_7,               KC_8,           KC_9,           KC_0,           KC_BSLASH,
        _______,        KC_J,           KC_L,               KC_U,           KC_Y,           KC_SCOLON,      KC_BSPACE,
                        KC_M,           KC_N,               KC_E,           KC_I,           KC_O,           KC_QUOTE,
        KC_LGUI,        KC_K,           KC_H,               KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,
                                        PROG_1,             INTL_MOD,       _______,        KC_BSLASH,      _______,

                                                                                                    _______,                _______,
                                                                                                                            _______,
                                                                            _______,                LT(WIND, KC_ESC),       KC_LSFT
    ),

    /**
     *
     *                                                     QWERTY
     *
     */
    [QWER] = LAYOUT_ergodox(
        // left hand
        KC_ESC,        _______,        _______,        _______,        _______,        _______,        _______,
        KC_TAB,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           _______,
        KC_LCTRL,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,
        KC_LSHIFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           _______,
                                        _______,        _______,        _______,        _______,        KC_LALT,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                       KC_SPACE,         KC_ENT,        _______,

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
        _______,        _______,        _______,        KC_DQT,         KC_UNDS,        _______,        _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                       _______,         _______,        _______,

        // right hand
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        LSFT(KC_BSLASH),KC_AMPR,        KC_ASTR,        KC_LABK,        KC_RABK,        _______,
                        KC_CIRC,        KC_SCOLON,      KC_EQUAL,       KC_LBRACKET,    KC_RBRACKET,    _______,
        _______,        _______,        KC_COLN,        KC_PLUS,        KC_MINUS,       _______,        _______,
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
        _______,        KC_F1,          KC_F2,          KC_F3,              KC_F4,          KC_F5,          _______,
        _______,        LALT(KC_F4),    _______,        LGUI(KC_UP),        _______,        _______,        _______,
        _______,        _______,        LGUI(KC_LEFT),  LGUI(KC_DOWN),      LGUI(KC_RIGHT), _______,
        _______,        _______,        _______,        LGUI(LSFT(KC_S)),   _______,        _______,        _______,
                                        _______,        _______,            _______,        _______,        _______,

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

    [GAME] = LAYOUT_ergodox(
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

    if ((layer & GAME) != 0) {
        ergodox_board_led_on();
    }
};
