#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#define GPIO(port, pin) ((port << 6) | pin)

#define C0 GPIO(0,2)
#define C1 GPIO(0,31)
#define C2 GPIO(0,29)
#define C3 GPIO(0,30)

#define R0 GPIO(0,5)
#define R1 GPIO(1,9)
#define R2 GPIO(1,10)

#define ENCA GPIO(0,24)
#define ENCB GPIO(1,11)

#define PIN_RGB GPIO(1,13)

// #endif

#define LED_PIN GPIO(1,12)
#define RESET_PIN GPIO(1,18)
#define SWO_PIN GPIO(1,0)
#define DFU_PIN GPIO(1,2)
#define SWITCH_PIN GPIO(0,26)
// #define POWER_PIN GPIO(1,9)

// i2c pins
#define CONFIG_PIN_SDA GPIO(0,15)
#define CONFIG_PIN_SCL GPIO(0,17)

//#define NRF_LOG_ENABLED 0
//#define NRF_LOG_BACKEND_SERIAL_USES_UART 0
//#define NRF_LOG_BACKEND_SERIAL_UART_TX_PIN 5
#define NRF_LOG_BACKEND_UART_TX_PIN 8
//#define DEBUG
// Low frequency clock source to be used by the SoftDevice
#ifdef S210
// #define NRF_CLOCK_LFCLKSRC      NRF_CLOCK_LFCLKSRC_XTAL_20_PPM
#else

// NRF_CLOCK_LF_SRC_RC - internal oscillator
// NRF_CLOCK_LF_SRC_XTAL - external crystal
// using E73 internal oscillator (assume there's no external crystal soldered)
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 16,                                \
                                 .rc_temp_ctiv  = 2,                                \
                                 .xtal_accuracy = 0}

#endif


#ifdef __cplusplus
}
#endif

#endif // CUSTOM_BOARD_H
