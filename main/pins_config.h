#pragma once

/***********************config*************************/
#define LCD_USB_QSPI_DREVER   1

#define SPI_FREQUENCY         75000000
#define TFT_SPI_MODE          (0)
#define TFT_SPI_HOST          SPI2_HOST

#define EXAMPLE_LCD_H_RES     536
#define EXAMPLE_LCD_V_RES     240
#define LVGL_LCD_BUF_SIZE     (EXAMPLE_LCD_H_RES * EXAMPLE_LCD_V_RES)

// #define WIFI_SSID             "YOUR-SSID"
// #define WIFI_PASSWORD         "YOUR-PSW"
#define WIFI_SSID             "AMBER_Network"
#define WIFI_PASSWORD         "001234500"

#define WIFI_CONNECT_WAIT_MAX (30 * 1000)

#define NTP_SERVER1           "pool.ntp.org"
#define NTP_SERVER2           "time.nist.gov"
#define GMT_OFFSET_SEC        7200
#define DAY_LIGHT_OFFSET_SEC  3600

/* Automatically update local time */
#define GET_TIMEZONE_API      "https://ipapi.co/timezone/"

/***********************config*************************/

#define TFT_WIDTH             240
#define TFT_HEIGHT            536
#define SEND_BUF_SIZE         (0x4000) //(LCD_WIDTH * LCD_HEIGHT + 8) / 10

#define TFT_TE                GPIO_NUM_9
#define TFT_SDO               GPIO_NUM_8

#define TFT_DC                GPIO_NUM_7
#define TFT_RES               GPIO_NUM_17
#define TFT_CS                GPIO_NUM_6
#define TFT_MOSI              GPIO_NUM_18
#define TFT_SCK               GPIO_NUM_47

#define TFT_QSPI_CS           GPIO_NUM_6
#define TFT_QSPI_SCK          GPIO_NUM_47
#define TFT_QSPI_D0           GPIO_NUM_18
#define TFT_QSPI_D1           GPIO_NUM_7
#define TFT_QSPI_D2           GPIO_NUM_48
#define TFT_QSPI_D3           GPIO_NUM_5
#define TFT_QSPI_RST          GPIO_NUM_17

#define PIN_LED               GPIO_NUM_38
#define PIN_BAT_VOLT          GPIO_NUM_4

#define PIN_BUTTON_1          GPIO_NUM_0
#define PIN_BUTTON_2          GPIO_NUM_21
