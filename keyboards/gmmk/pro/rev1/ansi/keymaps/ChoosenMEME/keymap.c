/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "rgb_matrix_map.h"

#ifndef MOD_MASK_NONE
#    define MOD_MASK_NONE 0
#endif

enum custom_layers{
    _DEF,
    _NOMOD,
    _UML,
};

#define LB_WIN (1 << _DEF)
#define LB_FN (1 << _UML)

const key_override_t o_grv_back = ko_make_with_layers_and_negmods(MOD_MASK_NONE, KC_GRV, DE_GRV, LB_WIN, MOD_MASK_SHIFT);   /* ` */
const key_override_t o_grv_tild = ko_make_with_layers(MOD_MASK_SHIFT, KC_GRV, DE_TILD, LB_WIN);    /* ~  */

const key_override_t o_2_at   = ko_make_with_layers(MOD_MASK_SHIFT, KC_2, DE_AT,   LB_WIN); /* @ */
const key_override_t o_3_hash = ko_make_with_layers(MOD_MASK_SHIFT, KC_3, DE_HASH, LB_WIN); /* # */
const key_override_t o_6_circ = ko_make_with_layers(MOD_MASK_SHIFT, KC_6, DE_CIRC, LB_WIN); /* ^ */
const key_override_t o_7_amp  = ko_make_with_layers(MOD_MASK_SHIFT, KC_7, DE_AMPR, LB_WIN); /* & */
const key_override_t o_8_ast  = ko_make_with_layers(MOD_MASK_SHIFT, KC_8, DE_ASTR, LB_WIN); /* * */
const key_override_t o_9_lpar = ko_make_with_layers(MOD_MASK_SHIFT, KC_9, DE_LPRN, LB_WIN); /* ( */
const key_override_t o_0_rpar = ko_make_with_layers(MOD_MASK_SHIFT, KC_0, DE_RPRN, LB_WIN); /* ) */

const key_override_t o_dash_minus = ko_make_with_layers_and_negmods(MOD_MASK_NONE, KC_MINS, DE_MINS, LB_WIN, MOD_MASK_SHIFT);   /* - */
const key_override_t o_dash_unders= ko_make_with_layers(MOD_MASK_SHIFT, KC_MINS, DE_UNDS, LB_WIN);                              /* _ */

const key_override_t o_equal_eq   = ko_make_with_layers_and_negmods(MOD_MASK_NONE, KC_EQL , DE_EQL , LB_WIN, MOD_MASK_SHIFT);   /* = */
const key_override_t o_equal_plus = ko_make_with_layers(MOD_MASK_SHIFT, KC_EQL, DE_PLUS, LB_WIN);                               /* + */

const key_override_t o_lbrc_brkt = ko_make_with_layers_and_negmods(MOD_MASK_NONE, KC_LBRC, DE_LBRC, LB_WIN, MOD_MASK_SHIFT);    /* [ */
const key_override_t o_lbrc_curly= ko_make_with_layers(MOD_MASK_SHIFT, KC_LBRC, DE_LCBR, LB_WIN);                               /* { */

const key_override_t o_rbrc_brkt = ko_make_with_layers_and_negmods(MOD_MASK_NONE, KC_RBRC, DE_RBRC, LB_WIN, MOD_MASK_SHIFT);    /* ] */
const key_override_t o_rbrc_curly= ko_make_with_layers(MOD_MASK_SHIFT, KC_RBRC, DE_RCBR, LB_WIN);                               /* } */

const key_override_t o_bsls_bk   = ko_make_with_layers_and_negmods(MOD_MASK_NONE, KC_BSLS, DE_BSLS, LB_WIN, MOD_MASK_SHIFT);    /* \ */
const key_override_t o_bsls_pipe = ko_make_with_layers(MOD_MASK_SHIFT, KC_BSLS, DE_PIPE, LB_WIN);                               /* | */

const key_override_t o_scln      = ko_make_with_layers_and_negmods(MOD_MASK_NONE, KC_SCLN, DE_SCLN, LB_WIN, MOD_MASK_SHIFT);    /* ; */
const key_override_t o_scln_coln = ko_make_with_layers(MOD_MASK_SHIFT, KC_SCLN, DE_COLN, LB_WIN);                               /* : */

const key_override_t o_quot      = ko_make_with_layers_and_negmods(MOD_MASK_NONE, KC_QUOT, DE_QUOT, LB_WIN, MOD_MASK_SHIFT);    /* ' */
const key_override_t o_quot_dquo = ko_make_with_layers(MOD_MASK_SHIFT, KC_QUOT, DE_DQUO, LB_WIN);                               /* " */

const key_override_t o_comm_lt   = ko_make_with_layers(MOD_MASK_SHIFT, KC_COMM, DE_LABK, LB_WIN);                               /* < */

const key_override_t o_dot_gt    = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, DE_RABK, LB_WIN);                                /* > */

const key_override_t o_slsh_fwd  = ko_make_with_layers_and_negmods(MOD_MASK_NONE, KC_SLSH, DE_SLSH, LB_WIN, MOD_MASK_SHIFT);    /* / */
const key_override_t o_slsh_qm   = ko_make_with_layers(MOD_MASK_SHIFT, KC_SLSH, DE_QUES, LB_WIN);                               /* ? */

const key_override_t o_fn_a_ae = ko_make_with_layers(MOD_MASK_NONE,  KC_A, DE_ADIA, LB_FN);     /* ä */
const key_override_t o_fn_A_AE = ko_make_with_layers(MOD_MASK_SHIFT, KC_A, S(DE_ADIA), LB_FN);  /* Ä */
const key_override_t o_fn_o_oe = ko_make_with_layers(MOD_MASK_NONE,  KC_O, DE_ODIA, LB_FN);     /* ö */
const key_override_t o_fn_O_OE = ko_make_with_layers(MOD_MASK_SHIFT, KC_O, S(DE_ODIA), LB_FN);  /* Ö */
const key_override_t o_fn_u_ue = ko_make_with_layers(MOD_MASK_NONE,  KC_U, DE_UDIA, LB_FN);     /* ü */
const key_override_t o_fn_U_UE = ko_make_with_layers(MOD_MASK_SHIFT, KC_U, S(DE_UDIA), LB_FN);  /* Ü */
const key_override_t o_fn_s_sz = ko_make_with_layers(MOD_MASK_NONE,  KC_S, DE_SS, LB_FN);       /* ß */

/* Override-Array  (NULL-terminated!) */
const key_override_t *key_overrides[] = {
    &o_grv_back, &o_grv_tild,
    &o_dash_minus, &o_dash_unders,
    &o_equal_eq, &o_equal_plus,
    &o_2_at,
    &o_3_hash,
    &o_6_circ,
    &o_7_amp,
    &o_8_ast,
    &o_9_lpar,
    &o_0_rpar,
    &o_lbrc_brkt, &o_lbrc_curly,
    &o_rbrc_brkt, &o_rbrc_curly,
    &o_bsls_bk, &o_bsls_pipe,

    &o_scln, &o_scln_coln,
    &o_quot, &o_quot_dquo,
    &o_comm_lt, &o_dot_gt,
    &o_slsh_fwd, &o_slsh_qm,

    &o_fn_a_ae, &o_fn_A_AE,
    &o_fn_o_oe, &o_fn_O_OE,
    &o_fn_u_ue, &o_fn_U_UE,
    &o_fn_s_sz
};

#define OSL_UML OSL(_UML)
#define MO_UML MO(_UML)
#define TG_MODS TG(_NOMOD)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_DEF] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        OSL_UML, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   TG_MODS,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO_UML,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_NOMOD] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        OSL_UML, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   TG_MODS,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO_UML,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_UML] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_END ,
        _______, _______, _______, _______, _______, _______, _______, KC_U,    _______, KC_O,    _______, _______, _______, QK_BOOT,          _______,
        _______, KC_A,    KC_S,    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_DEF] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_NOMOD] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_UML] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif

#if defined(RGB_MATRIX_ENABLE)
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    switch(get_highest_layer(layer_state|default_layer_state)) {
        case _DEF:
            rgb_matrix_set_color_all(RGB_GREEN);
            break;
        case _NOMOD:
            rgb_matrix_set_color_all(RGB_BLUE);
            break;
        case _UML:
            rgb_matrix_set_color_all(RGB_GREEN);
            for (uint8_t i=0; i<(sizeof(LED_LIST_UML)); i++) {
                rgb_matrix_set_color(LED_LIST_UML[i], RGB_RED);
            }
            break;
        default:
            break;
    }
    return false;
}
#endif
