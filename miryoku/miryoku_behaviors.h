// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_LT(LAYER, TAP) &u_lt LAYER TAP

#if defined (HRM_ORDER_GASC)
  #define U_HRM(b1, b2, b3, b4) \
  U_MT(LGUI, b1), U_MT(LALT, b2), U_MT(LSHFT, b3), U_MT(LCTRL, b4) 
#else
  #define U_HRM(b1, b2, b3, b4) \
  U_MT(LGUI, b1), U_MT(LALT, b2), U_MT(LCTRL, b3), U_MT(LSHFT, b4)
#endif

#define U_HRM_L(b1, b2, b3, b4) \
U_HRM(b1, b2, b3, b4)

#define U_HRM_R(b1, b2, b3, b4) \
U_HRM(b4, b3, b2, b1)
