#include <stdio.h>
#include <stdint.h>
#include "rm67162.h"
#include "setup_img.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "pins_config.h"
#include "esp_timer.h"
#include "esp_err.h"
#include "esp_log.h"


static uint16_t rnd16_t(uint16_t min, uint16_t max){
	uint16_t result = (rand() % (max - min + 1)) + min;
	return result;
}

extern "C" void app_main(void)
{
    rm67162_init(); // amoled lcd initialization
    lcd_setRotation(3);

    // lcd_fill(0, 0, 536, 240, 0x1111);
    lcd_PushColors(0, 0, 536, 240, (uint16_t *)gImage_setup_img);
    vTaskDelay(2000 / portTICK_PERIOD_MS);
    while(true){

    	uint8_t r = ((float)rand() / RAND_MAX) * 32;
    	uint8_t g = ((float)rand() / RAND_MAX) * 64;
    	uint8_t b = ((float)rand() / RAND_MAX) * 32;
    	uint16_t x1 = rnd16_t(0, TFT_HEIGHT);
    	uint16_t x2 = rnd16_t(x1, TFT_HEIGHT);
    	uint16_t y1 = rnd16_t(0, TFT_WIDTH-1);
    	uint16_t y2 = rnd16_t(y1, TFT_WIDTH);
    	uint16_t clr = (r << 11) | (g << 5) | b;

    	// ESP_LOGI("RM67162", "Generating bar (%d-%d) - (%d-%d) %04x", x1, x2, y1, y2, clr);

    	lcd_fill(x1, y1, x2, y2, clr);
    	// uncomment to
    	/*
    	if ((x2 - x1 > 2) && (y2 - y1 > 2)){
    		lcd_fill(x1+1, y1+1, x2-1, y2-1, 0);
    	}
    	*/
    	vTaskDelay(300 / portTICK_PERIOD_MS);
    }
}
