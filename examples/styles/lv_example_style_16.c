﻿#include "../lv_examples.h"
#if LV_BUILD_EXAMPLES

#if LV_USE_DRAW_SW_COMPLEX_GRADIENTS

#define NUM_STOPS 3

#if LV_GRADIENT_MAX_STOPS < NUM_STOPS
    #error Increase LV_GRADIENT_MAX_STOPS
#endif

/**
 * Simulate metallic knob using conical gradient
 */
void lv_example_style_16(void)
{
#if NUM_STOPS == 8
    static const lv_color_t grad_colors[8] = {
        LV_COLOR_MAKE(0xe8, 0xe8, 0xe8),
        LV_COLOR_MAKE(0xff, 0xff, 0xff),
        LV_COLOR_MAKE(0xfa, 0xfa, 0xfa),
        LV_COLOR_MAKE(0x79, 0x79, 0x79),
        LV_COLOR_MAKE(0x48, 0x48, 0x48),
        LV_COLOR_MAKE(0x4b, 0x4b, 0x4b),
        LV_COLOR_MAKE(0x70, 0x70, 0x70),
        LV_COLOR_MAKE(0xe8, 0xe8, 0xe8),
    };
#elif NUM_STOPS == 3
    static const lv_color_t grad_colors[3] = {
        LV_COLOR_MAKE(0xe8, 0xe8, 0xe8),
        LV_COLOR_MAKE(0xff, 0xff, 0xff),
        LV_COLOR_MAKE(0x79, 0x79, 0x79),
    };
#endif

    int32_t width = lv_display_get_horizontal_resolution(NULL);
    int32_t height = lv_display_get_vertical_resolution(NULL);

    /*Create a style with gradient background and shadow*/
    static lv_style_t style;
    lv_style_init(&style);
    lv_style_set_radius(&style, 500);
    lv_style_set_bg_opa(&style, LV_OPA_COVER);
    lv_style_set_shadow_color(&style, lv_color_black());
    lv_style_set_shadow_width(&style, 50);
    lv_style_set_shadow_offset_x(&style, 20);
    lv_style_set_shadow_offset_y(&style, 20);
    lv_style_set_shadow_opa(&style, LV_OPA_50);

    /*First define a color gradient. In this example we use a gray color map with random values.*/
    static lv_grad_dsc_t grad;

    lv_gradient_init_stops(&grad, grad_colors, NULL, NULL, sizeof(grad_colors) / sizeof(lv_color_t));

    /*Make a conical gradient with the center in the middle of the object*/
#if NUM_STOPS == 3
    lv_grad_conical_init(&grad, LV_GRAD_CENTER, LV_GRAD_CENTER, 0, 80, LV_GRAD_EXTEND_REFLECT);
#endif
#if NUM_STOPS == 8
    lv_grad_conical_init(&grad, LV_GRAD_CENTER, LV_GRAD_CENTER, 0, 120, LV_GRAD_EXTEND_REFLECT);
#endif

    /*Set gradient as background*/
    lv_style_set_bg_grad(&style, &grad);

    /*Create an object with the new style*/
    lv_obj_t * obj = lv_obj_create(lv_screen_active());
    lv_obj_add_style(obj, &style, 0);
    lv_obj_set_size(obj, 200, 200);
    lv_obj_center(obj);
}

#endif /*LV_USE_DRAW_SW_COMPLEX_GRADIENTS*/

#endif /*LV_BUILD_EXAMPLES*/