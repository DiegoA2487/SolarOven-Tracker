// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: Controlador Seguidor Solar

#include "ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets/icon_radiacion.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_icon_radiacion_png_data[] = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0xAD,0x15,0x55,0xAD,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x79,
    0x34,0xA5,0x6E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x54,0x34,0xA5,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x67,0x34,0xA5,0xFF,0x34,0xA5,0x6E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x65,0x34,0xA5,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x54,0x34,0xA5,0xFB,0x34,0xA5,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x67,0x34,0xA5,0xFF,0x34,0xA5,0x4D,0x00,0x00,0x00,0x34,0xA5,0x38,0x34,0xA5,0x74,0x34,0xA5,0x74,0x14,0xA5,0x40,0x00,0x00,0x00,0x34,0xA5,0x44,0x34,0xA5,0xFB,0x34,0xA5,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x46,0xF3,0x9C,0x18,0x34,0xA5,0xAB,
    0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xB3,0x55,0xAD,0x23,0x34,0xA5,0x58,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x84,0x02,0x34,0xA5,0x99,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xA1,0x14,0xA5,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x38,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0x4C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0xAD,0x15,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x34,0xA5,0x65,0x34,0xA5,0x76,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,
    0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0x83,0x34,0xA5,0x65,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x55,0xAD,0x15,0x55,0xAD,0x15,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x34,0xA5,0x65,0x34,0xA5,0x77,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0x84,0x34,0xA5,0x65,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x55,0xAD,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x44,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0x4C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0xAD,0x09,0x34,0xA5,0x9F,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xA8,0x55,0xAD,0x12,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x44,0x55,0xAD,0x23,0x34,0xA5,0xB7,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xFF,0x34,0xA5,0xC3,0x34,0xA5,0x20,0x34,0xA5,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x54,0x34,0xA5,0xFB,0x34,0xA5,0x58,0x00,0x00,0x00,0x34,0xA5,0x4C,0x34,0xA5,0x83,0x34,0xA5,0x83,0x34,0xA5,0x4C,0xF7,0xBD,0x04,0x34,0xA5,0x4D,0x34,0xA5,0xFF,0x34,0xA5,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x54,0x34,0xA5,0xFB,0x34,0xA5,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x65,0x34,0xA5,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x6E,0x34,0xA5,0xFF,0x34,0xA5,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x70,0x34,0xA5,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x6E,0x34,0xA5,0x79,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xA5,0x9F,0x34,0xA5,0x9F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0xAD,0x15,0x55,0xAD,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const lv_img_dsc_t ui_img_icon_radiacion_png = {
    .header.always_zero = 0,
    .header.w = 20,
    .header.h = 20,
    .data_size = sizeof(ui_img_icon_radiacion_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_icon_radiacion_png_data
};
