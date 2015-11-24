#pragma once

#define USE_GENERIC_MAIN
#undef REMOVE_LEADING_ZERO_FROM_TIME  /* 12 hour display will not have a leading "0" if this is defined */
#undef FONT_NAME
#undef FONT_SYSTEM_NAME  /* the default font system will be used */
#undef DEBUG_TIME

/* White background */
#define DEFAULT_TIME_COLOR COLOR_FALLBACK(GColorRed, GColorBlack);
#define DEFAULT_BACKGROUND_COLOR GColorWhite

#define FONT_BT_SYSTEM_NAME FONT_KEY_GOTHIC_18_BOLD
//#define NO_BLUETOOTH /* Do not show bluetooth disconnect status */
#define NO_BATTERY /* Do not show battery status */
#define NO_DATE /* Do not show date */

#define BG_IMAGE RESOURCE_ID_IMAGE_MAIN
#define IMAGE_RES_X 132  /* NOTE if image res changes - this needs to change too! */
#define IMAGE_RES_Y 132  /* NOTE if image res changes - this needs to change too! */

//#define BG_IMAGE_GRECT GRectZero

#ifdef PBL_ROUND /* 180x180 */
    /* Image at top of screen, centered horizontally */
    #define BG_IMAGE_GRECT GRect((180 - IMAGE_RES_X) / 2, 0, IMAGE_RES_X, IMAGE_RES_Y)

    #define CLOCK_POS GRect(0, 110, 180, 180) /* probably taller than really needed */

    #define BAT_POS GRect(0, 125, 180, 180) /* probably taller than really needed */
    #define BT_POS GRect(0, 20, 180, 180) /* probably taller than really needed */
    #define DATE_POS GRect(0, 140, 180, 180) /* probably taller than really needed */
#else /* PBL_RECT 144x168*/
    /* Image at top of screen, centered horizontally */
    #define BG_IMAGE_GRECT GRect((144 - IMAGE_RES_X) / 2, 0,  IMAGE_RES_X, IMAGE_RES_Y)  // use same size as image. On Aplite can determine this at runtime but not Basalt
    
    #define CLOCK_POS GRect(0, 118, 144, 168) /* bottom of screen for FONT_KEY_ROBOTO_BOLD_SUBSET_49 with one pixel border on bottom */

    #define BAT_POS GRect(0, 140, 144, 168) /* probably taller than really needed */
    #define BT_POS GRect(0, 10, 144, 168) /* probably taller than really needed */
    /* NOTE date not used */
    #define DATE_POS GRect(0, 140, 144, 168) /* probably taller than really needed */
#endif /* end of Round or rectangle */
