#pragma once


/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_USB_DETECT

// By default, when holding a dual-function key shortly after tapping it, the
// tapped key will begin repeating. This is handy for fast typists when typing
// words with double letters, such as "happy". If you turn this setting ON, it
// will be counted as a held modifier instead.
//#define TAPPING_FORCE_HOLD

// Customized by markstos
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY
// used for Tapping Term on thumb keys
#define TAPPING_TERM_THUMB 150

// If you press a dual-role key, press another key, and then release the
// dual-role key, all within the tapping term, by default the dual-role key
// will perform its tap action. If the HOLD_ON_OTHER_KEY_PRESS option is
// enabled, the dual-role key will perform its hold action instead.
#define HOLD_ON_OTHER_KEY_PRESS

// markstos: prevent keydown and keyup from firing on different layers
#define PREVENT_STUCK_MODIFERS

// When enabled, typing a mod-tap plus second within term will register as the mod-combo
// Ref: https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold#permissive-hold
// #define PERMISSIVE_HOLD

