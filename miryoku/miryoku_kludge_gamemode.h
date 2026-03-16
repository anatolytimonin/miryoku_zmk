// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// GameMode: activatable game layer for Corne (Sym+Num+Fun combo).

#pragma once

#if defined (MIRYOKU_KLUDGE_GAMEMODE) && defined (MIRYOKU_LAYOUTMAPPING_CORNE)

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_LAYOUTMAPPING_CORNE
#define MIRYOKU_LAYERMAPPING_GAME_AUX MIRYOKU_LAYOUTMAPPING_CORNE

// Layer Game:
//
//                                  Left_half                         Right_half
// ┌──────────┬─────────┬─────────┬─────────┬─────────┐ ┌─────────┬─────────┬─────────┬─────────┬─────────┐
// │ Tab      │ Q       │ W       │ E       │ R       │ │ Y       │ U       │ I       │ O       │ P       │
// │ Shift    │ A       │ S       │ D       │ F       │ │ H       │ J       │ K       │ Up      │ L       │
// │ Ctrl     │ Z       │ X       │ C       │ V       │ │ N       │ M       │ Left    │ Down    │ Right   │
// └──────────┴─────────┴─────────┴─────────┴─────────┘ └─────────┴─────────┴─────────┴─────────┴─────────┘
//                     ┌─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┐
//                     │ Alt     │ Space   │ Aux(Esc)│   │ Sym     │ Num     │ Fun     │
//                     └─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┘
//
// Notes:
// - Hold Sym+Num+Fun (left 3 thumbs) to activate this Game layer.
// - Hold Aux(Esc) to momentarily access `U_GAME_AUX`, tap for Esc.
#define MIRYOKU_LAYER_GAME \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,              &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,              &kp K,             &kp UP,            &kp L,             \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,              &kp LEFT,          &kp DOWN,          &kp RIGHT,         \
U_NP,              U_NP,              &kp LALT,          &kp SPACE,         &lt U_GAME_AUX ESC, U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Layer GameAux:
//
//                                  Left_half                         Right_half
// ┌──────────┬─────────┬─────────┬─────────┬─────────┐ ┌─────────┬─────────┬─────────┬─────────┬─────────┐
// │ Tab      │ 7       │ 8       │ 9       │ T       │ │ -       │ —       │ —       │ —       │ —       │
// │ Shift    │ 4       │ 5       │ 6       │ G       │ │ -       │ —       │ —       │ —       │ —       │
// │ Ctrl     │ 1       │ 2       │ 3       │ B       │ │ -       │ —       │ —       │ —       │ —       │
// └──────────┴─────────┴─────────┴─────────┴─────────┘ └─────────┴─────────┴─────────┴─────────┴─────────┘
//                     ┌─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┐
//                     │ Alt     │ Space   │ -       │   │ -       │ -       │ -       │
//                     └─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┘
//
// Notes:
// - Digits: 7 8 9 / 4 5 6 / 1 2 3 (no 0, no F-keys).
// - Keep Tab/Shift/Alt/Space as in Game.
// - T/G/B on left-half last column (index finger).
#define MIRYOKU_LAYER_GAME_AUX \
&kp TAB,           &kp N7,            &kp N8,            &kp N9,            &kp T,              U_NA,              U_NA,               U_NA,              U_NA,              U_NA,              \
&kp LSHFT,         &kp N4,            &kp N5,            &kp N6,            &kp G,              U_NA,              U_NA,               U_NA,              U_NA,              U_NA,              \
&kp LCTRL,         &kp N1,            &kp N2,            &kp N3,            &kp B,              U_NA,              U_NA,               U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              &kp LALT,          &kp SPACE,         U_NA,               U_NA,              U_NA,               U_NA,              U_NP,              U_NP

#endif
