// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: Controlador Seguidor Solar

#ifndef _CONTROLADOR_SEGUIDOR_SOLAR_UI_H
#define _CONTROLADOR_SEGUIDOR_SOLAR_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
#include "ui_theme_manager.h"
#include "ui_themes.h"

void OPAON_Animation(lv_obj_t * TargetObject, int delay);
void OPAOFF_Animation(lv_obj_t * TargetObject, int delay);
void Glow_Animation(lv_obj_t * TargetObject, int delay);

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_imgFondo;
extern lv_obj_t * ui_Panel_Principal;
extern lv_obj_t * ui_PanelMove;
extern lv_obj_t * ui_btnBgMove;
void ui_event_Glow_R(lv_event_t * e);
extern lv_obj_t * ui_Glow_R;
void ui_event_Glow_L(lv_event_t * e);
extern lv_obj_t * ui_Glow_L;
void ui_event_Glow_U(lv_event_t * e);
extern lv_obj_t * ui_Glow_U;
void ui_event_Glow_D(lv_event_t * e);
extern lv_obj_t * ui_Glow_D;
extern lv_obj_t * ui_btnBgMoveTop;
extern lv_obj_t * ui_btnRigth;
extern lv_obj_t * ui_btnUp;
extern lv_obj_t * ui_btnLeft;
extern lv_obj_t * ui_btnDown;
extern lv_obj_t * ui_ContainerWeather;
extern lv_obj_t * ui_Image17;
extern lv_obj_t * ui_Image19;
extern lv_obj_t * ui_ContainerVariables;
extern lv_obj_t * ui_PanelVariables;
extern lv_obj_t * ui_PanelRad;
extern lv_obj_t * ui_LabelVarRad;
extern lv_obj_t * ui_LabelTitle;
extern lv_obj_t * ui_LabelUnits;
extern lv_obj_t * ui_icon;
extern lv_obj_t * ui_Line;
extern lv_obj_t * ui_PanelTemp;
extern lv_obj_t * ui_LabelVarTemp;
extern lv_obj_t * ui_LabelTitle1;
extern lv_obj_t * ui_LabelUnits1;
extern lv_obj_t * ui_icon1;
extern lv_obj_t * ui_PanelVariables1;
extern lv_obj_t * ui_PanelHum;
extern lv_obj_t * ui_LabelVarHum;
extern lv_obj_t * ui_LabelTitle2;
extern lv_obj_t * ui_LabelUnits2;
extern lv_obj_t * ui_icon2;
extern lv_obj_t * ui_Line1;
extern lv_obj_t * ui_PanelTempExt;
extern lv_obj_t * ui_LabelVarTempExt;
extern lv_obj_t * ui_LabelTitle3;
extern lv_obj_t * ui_LabelUnits3;
extern lv_obj_t * ui_icon3;
extern lv_obj_t * ui_PanelVariables2;
extern lv_obj_t * ui_PanelAzimut;
extern lv_obj_t * ui_LabelVarAzimut;
extern lv_obj_t * ui_LabelTitle4;
extern lv_obj_t * ui_LabelUnits4;
extern lv_obj_t * ui_icon4;
extern lv_obj_t * ui_Line2;
extern lv_obj_t * ui_PanelCenit;
extern lv_obj_t * ui_LabelVarCenit;
extern lv_obj_t * ui_LabelTitle5;
extern lv_obj_t * ui_LabelUnits5;
extern lv_obj_t * ui_icon5;
extern lv_obj_t * ui_PanelMode;
extern lv_obj_t * ui_Container3;
extern lv_obj_t * ui_LabelTitle7;
void ui_event_Switch1(lv_event_t * e);
extern lv_obj_t * ui_Switch1;
extern lv_obj_t * ui_Container1;
extern lv_obj_t * ui_Image20;
extern lv_obj_t * ui_RollerModes;
extern lv_obj_t * ui_PanelNotification;
extern lv_obj_t * ui_LabelNotification;
extern lv_obj_t * ui_PanelNotificationIcon;
extern lv_obj_t * ui_icon8;
extern lv_obj_t * ui_icon7;
extern lv_obj_t * ui_icon9;
extern lv_obj_t * ui_PanelTimeAndDate;
extern lv_obj_t * ui_PanelRad3;
extern lv_obj_t * ui_LabelDate4;
extern lv_obj_t * ui_Line5;
extern lv_obj_t * ui_PanelTemp3;
extern lv_obj_t * ui_LabelDate1;
// CUSTOM VARIABLES
extern lv_obj_t * uic_PanelMove;
extern lv_obj_t * uic_btnRigth;

// EVENTS

extern lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE(ui_img_bg_main_png);    // assets/bg_Main.png
LV_IMG_DECLARE(ui_img_btn_bg_direction_png);    // assets/btn_bg_direction.png
LV_IMG_DECLARE(ui_img_btn_bg2_direction_png);    // assets/btn_bg2_direction.png
LV_IMG_DECLARE(ui_img_btn_right_png);    // assets/btn_Right.png
LV_IMG_DECLARE(ui_img_btn_up_png);    // assets/btn_Up.png
LV_IMG_DECLARE(ui_img_btn_left_png);    // assets/btn_left.png
LV_IMG_DECLARE(ui_img_btn_down_png);    // assets/btn_Down.png
LV_IMG_DECLARE(ui_img_indicator_bg_weather_png);    // assets/indicator_bg_weather.png
LV_IMG_DECLARE(ui_img_1784134941);    // assets/indicator_img_weather-rainy2.png
LV_IMG_DECLARE(ui_img_icon_radiacion_png);    // assets/icon_radiacion.png
LV_IMG_DECLARE(ui_img_icon_temperatura_png);    // assets/icon_temperatura.png
LV_IMG_DECLARE(ui_img_icon_humedad_png);    // assets/icon_humedad.png
LV_IMG_DECLARE(ui_img_icon_objetivo_png);    // assets/icon_objetivo.png
LV_IMG_DECLARE(ui_img_indicator_bg_mode2_png);    // assets/indicator_bg_mode2.png
LV_IMG_DECLARE(ui_img_99760210);    // assets/icon_wifi-on.png
LV_IMG_DECLARE(ui_img_821389505);    // assets/icon_warning-on.png
LV_IMG_DECLARE(ui_img_1640394774);    // assets/icon_cloud-on.png

// FONTS
LV_FONT_DECLARE(ui_font_Small_Font);

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
