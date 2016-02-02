/*----------------------------------------------------------------------------.
| StreakyCobra's keymap                                                         |
`----------------------------------------------------------------------------*/
#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "led.h"

#define BASE 0 // base layer
#define NUMR 1 // numerical layer
#define SYMB 2 // symbols layer
#define MDIA 3 // media keys layer

#define MDBL0 1 // Double zero
#define MCUT  2 // Cut
#define MCOPY 3 // Copy
#define MPSTE 4 // Paste

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Base layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `    |   1  |   2  |   3  |   4  |   5  | Num  |           |Play/P|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  | Symb |           | VolUp|   Y  |   U  |   I  |   O  |   P  |   ]    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |TempSymb|   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|Media |           | VolDn|------+------+------+------+------+--------|
 * | LShift |[/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |/ ctrl|\ shift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |  Z   |      |      |  Alt |                                       | AltGr| Alt  |      |      |   =   |
 *   `----------------------------------'                                       `-----------------------------------'
 *                                       ,--------------.       ,-------------.
 *                                       |  Esc  | NumL |       | Home | End  |
 *                                ,------+-------+------|       |------+------+------.
 *                                | LGui | Alt   |      |       |      |      |      |
 *                                |BackSp| Del   |------|       |------|Enter |Space |
 *                                |ace   |       | Esc  |       |RAL(S)|      |      |
 *                                `---------------------'       `--------------------'
 */
[BASE] = KEYMAP(

        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, TG(NUMR),
        KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   TG(SYMB),
        MO(SYMB),       KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSFT, CTL_T(KC_LBRC),      KC_X,   KC_C,   KC_V,   KC_B,   TG(MDIA),
        KC_TRNS,        KC_Z,      KC_TRNS, KC_TRNS, KC_LALT,

                                                      KC_ESC,  KC_NLCK,
                                                               KC_TRNS,
                              GUI_T(KC_BSPC), ALT_T(KC_DELT),  KC_ESC,

        // right hand
             KC_MPLY,     KC_6,   KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,
             KC_VOLU,     KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,     KC_RBRC,
                          KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
             KC_VOLD,     KC_N,   KC_M,    KC_COMM, KC_DOT,  CTL_T(KC_SLSH),  SFT_T(KC_BSLS),
                             KC_RALT, KC_LALT, KC_TRNS, KC_TRNS, KC_EQL,

             KC_HOME, KC_END,
             KC_TRNS,
        RALT(KC_SPC), KC_ENT,  KC_SPC
    ),
/* Numeric Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |      |      |  Tab |   /  |   *  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |  F6  |  F7  |  F8  |  F9  |  F10 |      |           |      |      |      |   7  |   8  |   9  |   -    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  F11 |  F12 |      |      |      |------|           |------|      |      |   4  |   5  |   6  |   +    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |   1  |   2  |   3  |KpEnter |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |   0  |  00  |   .  |KpEnter|
 *   `----------------------------------'                                       `-----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[NUMR] = KEYMAP(
       // left hand
       KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS,
       KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
       KC_TRNS, KC_F11,  KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                                               KC_TRNS, KC_TRNS,KC_TRNS,
       // right hand
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TAB,  KC_PSLS, KC_PAST, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
                KC_TRNS, KC_TRNS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_PENT,
                         KC_TRNS, KC_P0,   M(MDBL0),KC_PDOT, KC_PENT,

       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),
/* Symbol Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      | CTL_Y|      |      |           |      |      | Home | PgUp | WH_U | CTL_U|   F12  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      | Esc  |      |------|           |------| Left | Down |  Up  | Right|      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      | CTL_E|      |      |           |      |      |  End | PgDn | WH_D | CTL_D|        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 | SPACE| Enter|------|       |------| COPY | PASTE|
 *                                 |      |      |      |       | CUT  |      |      |
 *                                 `--------------------'       `--------------------'
 */
[SYMB] = KEYMAP(
       // left hand
       KC_TRNS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,LCTL(KC_X),KC_TRNS,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_ESC,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,LCTL(KC_F),KC_TRNS,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                               KC_SPC,KC_ENT,KC_TRNS,
       // right hand
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_HOME, KC_PGUP, KC_WH_U,    LCTL(KC_S), KC_TRNS,
                KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,    KC_PLUS, KC_TRNS,
       KC_TRNS, KC_TRNS,  KC_END, KC_PGDN, KC_WH_D,    LCTL(KC_I), KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       M(MCUT), M(MCOPY), M(MPSTE)
),
/* Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      | MsUp |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |MsLeft|MsDown|MsRght|      |------|           |------| Prev |VolDn |VolUp | Next |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | Rclk | Lclk |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------| Mute | Play |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[MDIA] = KEYMAP(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN2, KC_BTN1,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,
    // right hand
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_MUTE, KC_MPLY
),
};

const uint16_t PROGMEM fn_actions[] = {
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
    switch(id) {
        case MDBL0:
            if (record->event.pressed) {
              return MACRO( I(25), T(P0), T(P0), END );
            }
        break;
        case MCUT:
            if (record->event.pressed) {
                return MACRO(D(LSFT), T(DELT), U(LSFT), END);
            }
            break;
        case MCOPY:
            if (record->event.pressed) {
                return MACRO(D(LCTL), T(INS), U(LCTL), END);
            }
            break;
        case MPSTE:
            if (record->event.pressed) {
                return MACRO(D(LSFT), T(INS), U(LSFT), END);
            }
            break;
    }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void * matrix_init_user(void) {
  // Turn off
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  for(int i=0; i<2; i++){
    // Blink
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();

    // Turn off
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
  }
};

// Runs constantly in the background, in a loop.
void * matrix_scan_user(void) {

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    // led 1: numeric layer
    if (layer_state & (1 << NUMR)) {
        ergodox_right_led_1_on();
    }
    // led 2: symbols layer
    if (layer_state & (1 << SYMB)) {
        ergodox_right_led_2_on();
    }
    // led 3: media laye
    if (layer_state & (1 << MDIA)) {
      ergodox_right_led_3_on();
    }
};
