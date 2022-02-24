#include "ergodone.h"
#include "version.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
};

#define BASE 0
#define PROG 1
#define NUMBERS 2
#define QWER 3
#define LOCAL 4

#define TABBING 11
#define FN 12
#define WIND 13

#define INTL_MOD LALT(KC_LSFT)

#define PROG_1 MO(PROG)
#define M_CHLG LALT(KC_LSFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /**
     *
     *                                                     BASE
     *
     */
    [BASE] = LAYOUT_ergodox(
        // left hand
        KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,               KC_5,                   KC_DOWN,
        KC_LSHIFT,      KC_Q,           KC_W,           KC_F,           KC_P,               KC_B,                   M_CHLG,
        KC_ENT,         KC_A,           KC_R,           KC_S,           KC_T,               KC_G,
        KC_TAB,         KC_Z,           KC_X,           KC_C,           KC_D,               KC_V,                   KC_ESC,
                                        KC_LBRACKET,    LT(WIND, KC_RBRACKET),    _______,            KC_LALT,                LT(FN, KC_SPACE),

                                                                                                    LT(WIND, KC_LGUI),      KC_SPACE,
                                                                                                                            KC_BSPC,
                                                                            KC_LCTRL,               KC_LGUI,                 KC_DEL,

        // right hand
        _______,            KC_6,           KC_7,               KC_8,           KC_9,           KC_0,           KC_BSLASH,
        _______,            KC_J,           KC_L,               KC_U,           KC_Y,           KC_SCOLON,      KC_BSPACE,
                            KC_M,           KC_N,               KC_E,           KC_I,           KC_O,           KC_QUOTE,
        LGUI(KC_SPACE),     KC_K,           KC_H,               KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,
                                            MO(PROG),           MO(LOCAL),      LCTL(KC_SLCK),  KC_SLCK,        KC_PAUS,

                                                                                                    TG(QWER),               MO(WIND),
                                                                                                                            _______,
                                                                            _______,                MO(PROG),                KC_LSFT
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
        _______,        _______,        KC_LCBR,        KC_RCBR,        _______,        LSFT(KC_SCLN),  _______,
                        KC_CIRC,        KC_EQUAL,       KC_EXLM,        LSFT(KC_BSLS),  KC_AMPR,        KC_DQUO,
        _______,        _______,        _______,        KC_LABK,        KC_RABK,        _______,        _______,
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
        KC_AUDIO_VOL_DOWN,  KC_PGUP,                LCTL(KC_LEFT),          KC_UP,                  LCTL(KC_RIGHT), KC_HOME,        _______,
        _______,            KC_PGDOWN,              KC_LEFT,                KC_DOWN,                KC_RIGHT,       KC_END,
        LSFT(KC_TAB),            _______,                LGUI(KC_UP),            LGUI(KC_DOWN),          _______,        _______,        _______,
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
  return true;
}

void matrix_init_user(void) {

};

void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    ergodox_board_led_off();

    if ((layer & QWER) != 0) {
        ergodox_board_led_on();
    }
};
