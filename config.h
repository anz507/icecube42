#pragma once

/* SPI pins */
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP10
#define SPI_MOSI_PIN GP11

/* LCD Configuration */
#define LCD_RST_PIN GP4
#define LCD_DC_PIN GP5
#define LCD_CS_PIN GP6
// #define LCD_BLK_PIN GP7 // Unused in this configuration
#define LCD_SPI_DIVISOR 32
#define LCD_WAIT_TIME 150
#define LCD_ROTATION QP_ROTATION_0
#define LCD_INVERT_COLOR
#define LCD_OFFSET_X 26
#define LCD_OFFSET_Y 1

#define QUANTUM_PAINTER_NUM_IMAGES 3
#define QUANTUM_PAINTER_TASK_THROTTLE 1
#define QUANTUM_PAINTER_CONCURRENT_ANIMATIONS 3

// QP Configuration
#define QUANTUM_PAINTER_SUPPORTS_NATIVE_COLORS TRUE

// Timeout configuration, default 30000 (30 sek). 0 = No timeout. Beware of image retention.
#define QUANTUM_PAINTER_DISPLAY_TIMEOUT 0