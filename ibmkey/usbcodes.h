/*********************************************************************
 * ibm_1391401.h - Keymap for US IBM 1391401 keyboard layout         *
 *********************************************************************
 * rump is copyright (C) 2008 Chris Lee <clee@mg8.org>                *
 * based on c64key, copyright (C) 2006-2007 Mikkel Holm Olsen         *
 * based on HID-Test by Christian Starkjohann, Objective Development  *
 **********************************************************************
 * rump (Real USB Model-M PCB) is Free Software; you can redistribute *
 * and/or modify it under the terms of the OBDEV lice,nse, as found   *
 * in the license.txt file.                                           *
 *                                                                    *
 * rump is distributed in the hope that it will be useful, but        *
 * WITHOUT ANY WARRANTY; without even the implied warranty of         *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the      *
 * OBDEV license for further details.                                 *
 *********************************************************************/

#ifndef USBCODES_H
#define USBCODES_H

/* The USB keycodes are enumerated here - the first part is simply
   an enumeration of the allowed scan-codes used for USB HID devices */
enum keycodes {
  KEY__=0,
  KEY_errorRollOver,
  KEY_POSTfail,
  KEY_errorUndefined,
  KEY_A,        // 4
  KEY_B,
  KEY_C,
  KEY_D,
  KEY_E,
  KEY_F,
  KEY_G, 
  KEY_H,
  KEY_I,
  KEY_J,
  KEY_K,
  KEY_L,
  KEY_M,        // 0x10
  KEY_N,
  KEY_O,
  KEY_P,
  KEY_Q, 
  KEY_R,
  KEY_S,
  KEY_T,
  KEY_U,
  KEY_V,
  KEY_W,
  KEY_X,
  KEY_Y,
  KEY_Z,
  KEY_1,
  KEY_2,
  KEY_3,        // 0x20
  KEY_4,
  KEY_5,
  KEY_6,
  KEY_7,
  KEY_8,
  KEY_9,
  KEY_0,        // 0x27
  KEY_enter,
  KEY_esc,
  KEY_bckspc,   // backspace
  KEY_tab,
  KEY_spc,      // space
  KEY_minus,    // - (and _)
  KEY_equal,    // = (and +)
  KEY_lbr,      // [
  KEY_rbr,      // ]  -- 0x30
  KEY_bckslsh,  // \ (and |)
  KEY_hash,     // Non-US # and ~
  KEY_smcol,    // ; (and :)
  KEY_ping,     // ' and "
  KEY_grave,    // Grave accent and tilde
  KEY_comma,    // , (and <)
  KEY_dot,      // . (and >)
  KEY_slash,    // / (and ?)
  KEY_cpslck,   // capslock
  KEY_F1,
  KEY_F2,
  KEY_F3,
  KEY_F4,
  KEY_F5,
  KEY_F6, 
  KEY_F7,       // 0x40
  KEY_F8,
  KEY_F9,
  KEY_F10,
  KEY_F11,
  KEY_F12,
  KEY_PrtScr,
  KEY_scrlck,
  KEY_break,
  KEY_ins,
  KEY_home,
  KEY_pgup,
  KEY_del,
  KEY_end,
  KEY_pgdn,
  KEY_rarr, 
  KEY_larr,     // 0x50
  KEY_darr,
  KEY_uarr,
  KEY_numlock,
  KEY_KPslash,
  KEY_KPast,
  KEY_KPminus,
  KEY_KPplus,
  KEY_KPenter,
  KEY_KP1,
  KEY_KP2,
  KEY_KP3,
  KEY_KP4,
  KEY_KP5,
  KEY_KP6,
  KEY_KP7,
  KEY_KP8,      // 0x60
  KEY_KP9,
  KEY_KP0,
  KEY_KPcomma,
  KEY_Euro2,
  KEY_Application,
  KEY_Power,
  KEY_KPEqual,
  KEY_F13,
  KEY_F14,
  KEY_F15,
  KEY_F16,
  KEY_F17,
  KEY_F18,
  KEY_F19,
  KEY_F20,
  KEY_F21,      // 0x70
  KEY_F22,
  KEY_F23,
  KEY_F24,
  KEY_Execute,
  KEY_Help,
  KEY_Menu,
  KEY_Select,
  KEY_Stop,
  KEY_Again,
  KEY_Undo,
  KEY_Cut,
  KEY_Copy,
  KEY_Paste,
  KEY_Find,
  KEY_Mute,
  KEY_VolumeUp, // 0x80
  KEY_VolumeDown,
  KEY_LockingCapsLock,
  KEY_LockingNumLock,
  KEY_LockingScrollLock,
  KEY_KPcomma2,
  KEY_KPequalSign,
  KEY_International1,
  KEY_International2,
  KEY_International3,
  KEY_International4,
  KEY_International5,
  KEY_International6,
  KEY_International7,
  KEY_International8,
  KEY_International9,
  KEY_LANG1,    // 0x90
  KEY_LANG2,
  KEY_LANG3,
  KEY_LANG4,
  KEY_LANG5,
  KEY_LANG6,
  KEY_LANG7,
  KEY_LANG8,
  KEY_LANG9,
  KEY_AlternateErase,
  KEY_SysRq,
  KEY_Cancel,
  KEY_Clear,
  KEY_Prior,
  KEY_Return,
  KEY_Separator,
  KEY_Out,      // 0xA0
  KEY_Oper,
  KEY_ClearAgain,
  KEY_CrSelProps,
  KEY_ExSel,

  /* These are NOT standard USB HID - handled specially in decoding,
     so they will be mapped to the modifier byte in the USB report */
  KEY_Modifiers,
  MOD_LCTRL,    // 0x01
  MOD_LSHIFT,   // 0x02
  MOD_LALT,     // 0x04
  MOD_LGUI,     // 0x08
  MOD_RCTRL,    // 0x10
  MOD_RSHIFT,   // 0x20
  MOD_RALT,     // 0x40
  MOD_RGUI,     // 0x80
};

#endif
