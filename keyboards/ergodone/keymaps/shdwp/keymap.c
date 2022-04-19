#include "ergodone.h"
#include "version.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here

  MAC_CHLG,
};

#define BASE_MAC 0
#define BASE_WIN 1
#define QWER 2

#define PROG 10
#define NUMBERS 11
#define LOCAL 13
#define FN 14
#define WIND 15

#define WIN_CHL LALT(KC_LSFT)

#define MAC_PT SCMD(KC_LBRC)
#define MAC_NT SCMD(KC_RBRC)
#define MAC_ALF LGUI(KC_SPACE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /**
     *
     *                                                     BASE
     *
     */
    [BASE_MAC] = LAYOUT_ergodox(
        // left hand
        KC_NUBS,        KC_1,           KC_2,           KC_3,           KC_4,               KC_5,                   MAC_PT,
        KC_LSHIFT,      KC_Q,           KC_W,           KC_E,           KC_R,               KC_T,                   MAC_NT,
        KC_ENT,         KC_A,           KC_S,           KC_D,           KC_F,               KC_G,
        KC_TAB,         KC_GRAVE,       KC_Z,           KC_X,           KC_C,               KC_V,                   KC_RIGHT,
                                        KC_ESC,         _______,        _______,            KC_LALT,                LT(FN, KC_SPACE),

                                                                                                   KC_SPACE,                KC_SPACE,
                                                                                                                            KC_DEL,
                                                                            KC_LGUI,               KC_LCTRL,                LGUI(KC_BSPACE),

        // right hand
        _______,            KC_6,           KC_7,               KC_8,           KC_9,           KC_0,           KC_BSLASH,
        MAC_CHLG,           KC_Y,           KC_U,               KC_I,           KC_O,           KC_P,           KC_BSPACE,
                            KC_H,           KC_J,               KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
        MAC_ALF,            KC_N,           KC_M,               KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,
                                            MO(PROG),           KC_RALT,        LCTL(KC_SLCK),  KC_SLCK,        KC_PAUS,

                                                                                                    TG(QWER),               TG(BASE_WIN),
                                                                                                                            _______,
                                                                            _______,                KC_ESC,                 KC_LSFT
    ),

    /**
     *
     *                                                     BASE
     */
    [BASE_WIN] = LAYOUT_ergodox(
        // left hand
        KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,               KC_5,                   KC_ESC,
        KC_LSHIFT,      KC_Q,           KC_W,           KC_F,           KC_P,               KC_B,                   _______,
        KC_ENT,         KC_A,           KC_R,           KC_S,           KC_T,               KC_G,
        KC_TAB,         KC_Z,           KC_X,           KC_C,           KC_D,               KC_V,                   KC_RIGHT,
                                        KC_ESC,         LT(WIND, KC_RBRACKET),              _______,                KC_LALT,                LT(FN, KC_SPACE),

                                                                                                    LT(WIND, KC_LGUI),      KC_SPACE,
                                                                                                                            KC_BSPC,
                                                                            KC_LCTRL,               KC_LCTRL,                KC_DEL,

        // right hand
        _______,            KC_6,           KC_7,               KC_8,           KC_9,           KC_0,           KC_BSLASH,
        WIN_CHL,            KC_J,           KC_L,               KC_U,           KC_Y,           KC_SCOLON,      KC_BSPACE,
                            KC_M,           KC_N,               KC_E,           KC_I,           KC_O,           KC_QUOTE,
        KC_LGUI,            KC_K,           KC_H,               KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,
                                            MO(PROG),           MO(LOCAL),      LCTL(KC_SLCK),  KC_SLCK,        KC_PAUS,

                                                                                                    _______,                _______,
                                                                                                                            _______,
                                                                            _______,                KC_ESC,                 KC_LSFT
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

    [LOCAL] = LAYOUT_ergodox(
        // left hand
        LCA(KC_GRAVE),  _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        LCA(KC_R),      _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        LCA(KC_MINUS),  _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______,


        // right hand
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
        _______,        _______,        LCA(KC_L),      _______,         _______,       _______,        _______,
                        _______,        _______,        _______,         _______,       _______,        LCA(KC_QUOTE),
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
                                        _______,        _______,         _______,       _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______
    ),

    [NUMBERS] = LAYOUT_ergodox(
        // left hand
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                        _______,        _______,        _______,

        // right hand
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
                        KC_6,           KC_7,           KC_8,            KC_9,          KC_0,        _______,
        _______,        _______,        _______,        _______,         _______,       _______,        _______,
                                        _______,        _______,         _______,       _______,        _______,

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
        _______,        KC_LBRC,        KC_RBRC,        KC_LPRN,        KC_RPRN,        _______,        _______,
        _______,        KC_UNDS,        KC_ASTR,        KC_MINUS,       KC_PLUS,        KC_PERC,
        _______,        _______,        _______,        KC_HASH,        KC_DLR,         _______,        _______,
                                        _______,        _______,        _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                       _______,         _______,        _______,

        // right hand
        _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        KC_LCBR,        KC_RCBR,        _______,        LSFT(KC_P),     _______,
                        KC_CIRC,        KC_EQUAL,       KC_EXLM,        LSFT(KC_BSLS),  KC_AMPR,        KC_DQUO,
        _______,        _______,        LSFT(KC_BSLASH),KC_LABK,        KC_RABK,        LSFT(KC_SLASH), _______,
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
        KC_AUDIO_VOL_DOWN,  KC_PGUP,                LALT(KC_LEFT),          KC_UP,                  LALT(KC_RIGHT), KC_HOME,        _______,
        LGUI(KC_DOWN),      KC_PGDOWN,              KC_LEFT,                KC_DOWN,                KC_RIGHT,       KC_END,
        LGUI(KC_UP),        LGUI(KC_BSPC),          _______,                LGUI(KC_LBRC),          LGUI(KC_RBRC),  _______,        _______,
                                                    _______,                _______,                _______,        _______,        _______,

                                                                                        _______,        _______,
                                                                                                        _______,
                                                                       _______,         _______,        _______,

        // right hand
        _______,        _______,        _______,        _______,        _______,        _______,        KC_LOCK,
        _______,        KC_MS_WH_UP,    _______,        KC_MS_UP,       _______,        _______,        KC_DEL,
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

    /*
    [] = LAYOUT_ergodox(
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
  if (keycode == MAC_CHLG) {
    bool mod_pressed = get_mods() & MOD_MASK_CTRL;

    if (mod_pressed) {
      if (record->event.pressed) {
        register_code(KC_SPACE);
      } else {
        unregister_code(KC_SPACE);
      }
    } else {
      if (record->event.pressed) {
          register_code(KC_LCTRL);
          tap_code_delay(KC_SPACE, 192);
          unregister_code(KC_LCTRL);
      }
    }
  }
  return true;
}

void matrix_init_user(void) {

};

void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    ergodox_board_led_off();

    if ((layer & QWER) == QWER) {
        ergodox_board_led_on();
    }

    if ((layer & BASE_WIN) == BASE_WIN) {
        ergodox_board_led_on();
    }
};
