#ifndef MASTER_CONFIG_H_
#define MASTER_CONFIG_H_

#include "custom_board.h"

#define THIS_DEVICE_ROWS MATRIX_ROWS
#define THIS_DEVICE_COLS MATRIX_COLS

#define MATRIX_ROW_PINS { R0, R1, R2 }
#define MATRIX_COL_PINS { C0, C1, C2, C3 }

#ifdef ENCODER_ENABLE
	#define ENCODERS_PAD_A { ENCA }
	#define ENCODERS_PAD_B { ENCB }
	#define ENCODER_RESOLUTION  4
	// #define MATRIX_SCAN_TIME_MS 1
#endif

#define TAP_CODE_DELAY 4
#define IS_LEFT_HAND  true
#define ENABLE_STARTUP_ADV_NOLIST

#endif /* MASTER_CONFIG_H_ */
