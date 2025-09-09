// Encoder support
#define ENCODER_RESOLUTION 4

// Define options
#define TAPPING_TERM 135
#define PERMISSIVE_HOLD

#define LCD_WIDTH 80
#define LCD_HEIGHT 160
#define SPI_MODE 1
#define ST7735
#define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral

#define WS2812_DI_PIN GP23   // See readme.md for wiring your led's
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
// #define RGBLED_NUM 8         // Number of LEDs. Change this to match your use case.
#undef RGBLIGHT_LED_COUNT
#define RGBLIGHT_LED_COUNT 24         // Number of LEDs. Change this to match your use case.
// #define WS2812_LED_COUNT 8         // Number of LEDs. Change this to match your use case.
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8