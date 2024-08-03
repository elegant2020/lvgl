
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_TEST_RGB565_LZ4_ALIGN64
#define LV_ATTRIBUTE_TEST_RGB565_LZ4_ALIGN64
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_TEST_RGB565_LZ4_ALIGN64
uint8_t test_RGB565_LZ4_align64_map[] = {

    0x02,0x00,0x00,0x00,0x25,0x06,0x00,0x00,0xc0,0x21,0x00,0x00,0x2f,0xe0,0x07,0x02,
    0x00,0x79,0x5f,0x00,0x00,0xe0,0x07,0xff,0x01,0x00,0x76,0x0f,0x90,0x00,0x87,0x1b,
    0x00,0x01,0x00,0x0f,0x33,0x01,0x3d,0x2f,0x00,0xf8,0x02,0x00,0x0d,0x0a,0x20,0x01,
    0x0b,0x8f,0x00,0x0f,0x90,0x00,0x0d,0xff,0x00,0xbd,0x5f,0x6b,0x5f,0x29,0x3f,0x00,
    0x3f,0x00,0x5f,0x29,0x5f,0x6b,0xff,0xbd,0x2e,0x00,0x0c,0x32,0xff,0xff,0xff,0x70,
    0x00,0x0f,0x02,0x00,0x07,0x02,0x20,0x00,0x06,0xb0,0x01,0x0f,0x90,0x00,0x17,0x6a,
    0x3f,0xe7,0x5f,0x6b,0x1f,0x00,0x02,0x00,0x48,0x5f,0x6b,0x3f,0xe7,0x6c,0x00,0x86,
    0xbf,0x94,0xff,0x18,0xff,0x18,0xbf,0x94,0x14,0x00,0x2f,0x00,0xf8,0x24,0x01,0x09,
    0x02,0x20,0x00,0x0f,0x90,0x00,0x21,0x4a,0x3f,0xe7,0xbf,0x52,0x8c,0x00,0x02,0x02,
    0x00,0x29,0xbf,0x52,0x92,0x00,0x7c,0x18,0x1f,0x00,0x1f,0x00,0xff,0x18,0x90,0x00,
    0x06,0x10,0x00,0x08,0x02,0x00,0x0f,0x90,0x00,0x29,0x0e,0x1c,0x01,0x04,0x02,0x00,
    0x27,0x5f,0x6b,0x64,0x00,0x0f,0x90,0x00,0x06,0x0e,0x46,0x02,0x0f,0x90,0x00,0x2a,
    0x14,0xbd,0x7e,0x00,0x0f,0x02,0x00,0x01,0x06,0x48,0x02,0x0f,0xb0,0x01,0x05,0x02,
    0x7c,0x00,0x08,0x02,0x00,0x04,0x14,0x00,0x02,0x3c,0x01,0x0f,0x40,0x02,0x1d,0x0f,
    0x1e,0x01,0x07,0x0d,0x22,0x01,0x0b,0x02,0x00,0x08,0x78,0x00,0x06,0x24,0x01,0x0a,
    0x18,0x00,0x0f,0x90,0x00,0x20,0x12,0x29,0x7a,0x00,0x0f,0x02,0x00,0x03,0x2b,0x5f,
    0x29,0x85,0x00,0x07,0x02,0x00,0x0e,0x7c,0x00,0x0f,0x14,0x00,0x01,0x06,0x20,0x01,
    0x0c,0x02,0x00,0x0f,0x70,0x03,0x03,0x1b,0x3f,0x58,0x03,0x0a,0x02,0x00,0x14,0x3f,
    0x26,0x04,0x96,0xbd,0x9f,0x52,0x7f,0x08,0x7f,0x08,0x9f,0x52,0xc2,0x01,0x0c,0x90,
    0x00,0x0f,0x10,0x00,0x01,0x0f,0x90,0x00,0x44,0x16,0xbd,0x46,0x01,0x24,0x5f,0x29,
    0x92,0x00,0x0c,0x80,0x00,0x0f,0x20,0x01,0x33,0x06,0x6a,0x00,0x0f,0x02,0x00,0x01,
    0x02,0xb0,0x01,0x19,0x9f,0x10,0x04,0x2f,0x9f,0x52,0x7c,0x00,0x01,0x04,0x02,0x00,
    0x0a,0xa8,0x00,0x0f,0x20,0x01,0x1f,0x0f,0xd0,0x02,0x11,0x28,0x7f,0x08,0xac,0x00,
    0x2e,0x7f,0x08,0x90,0x00,0x08,0x02,0x00,0x08,0x94,0x00,0x0f,0x90,0x00,0x1f,0x0f,
    0xf0,0x03,0x11,0x0f,0x90,0x00,0x0d,0x0c,0x02,0x00,0x06,0x94,0x00,0x0f,0x90,0x00,
    0x20,0x0f,0x22,0x01,0x08,0x04,0x10,0x05,0x0f,0xb0,0x01,0x0b,0x0f,0x02,0x00,0x01,
    0x04,0x94,0x00,0x0f,0x90,0x00,0x21,0x0f,0x30,0x06,0x10,0x0f,0xd0,0x02,0x08,0x0f,
    0x02,0x00,0x05,0x02,0x94,0x00,0x0f,0x90,0x00,0x21,0x0f,0x50,0x07,0x12,0x0f,0xf0,
    0x03,0x04,0x0f,0x02,0x00,0x09,0x0c,0xa0,0x05,0x0f,0x02,0x00,0x1c,0x0f,0x70,0x08,
    0x20,0x0f,0x02,0x00,0x0d,0x0f,0x20,0x01,0x0b,0x0f,0x02,0x00,0x63,0x0f,0xa0,0x05,
    0x07,0x0f,0x02,0x00,0x63,0x0f,0x90,0x00,0x01,0xac,0x7d,0xef,0xba,0xd6,0x59,0xce,
    0xdb,0xde,0xbe,0xf7,0x94,0x00,0x0c,0x44,0x06,0x0f,0x02,0x00,0x3b,0x0e,0xb0,0x01,
    0x64,0x59,0xce,0x4d,0x6b,0x04,0x21,0x66,0x00,0x6c,0x20,0x00,0xc7,0x39,0x14,0xa5,
    0x94,0x00,0x0f,0x02,0x00,0x4b,0x08,0x20,0x01,0x24,0x69,0x4a,0x8a,0x00,0x08,0x02,
    0x00,0x3d,0x08,0x42,0x9e,0x28,0x01,0x0f,0x02,0x00,0x47,0x08,0x90,0x00,0x26,0xa2,
    0x10,0x88,0x00,0x16,0x20,0x0b,0x00,0x23,0x00,0xaa,0x82,0x06,0x0f,0x02,0x00,0x51,
    0x08,0x90,0x00,0xf6,0x01,0xc3,0x18,0x00,0x00,0x00,0x00,0xc3,0x18,0xb6,0xb5,0xbe,
    0xf7,0xdf,0xff,0x18,0xc6,0xba,0x01,0x2f,0x9a,0xd6,0x8c,0x00,0x51,0x0c,0x40,0x02,
    0x11,0xe3,0x90,0x00,0x22,0xcb,0x5a,0x1a,0x00,0x44,0xff,0xff,0xd7,0xbd,0x25,0x01,
    0x24,0x71,0x8c,0x14,0x00,0x04,0x02,0x00,0xf4,0x01,0x5d,0xef,0x51,0x8c,0x08,0x42,
    0x04,0x21,0xc3,0x18,0x45,0x29,0x0c,0x63,0x38,0xc6,0x18,0x00,0x0f,0x02,0x00,0x2d,
    0x08,0x20,0x01,0x75,0x08,0x42,0x04,0x21,0x04,0x21,0x92,0xa4,0x0c,0x24,0xbe,0xf7,
    0x90,0x00,0x2a,0xae,0x73,0x68,0x00,0x28,0x55,0xad,0xd0,0x01,0x6a,0x00,0x00,0x00,
    0x00,0x10,0x84,0x22,0x00,0x0f,0x02,0x00,0x25,0x08,0x90,0x00,0x08,0x02,0x00,0x62,
    0x9e,0xf7,0x5d,0xef,0x5d,0xef,0x6c,0x00,0x38,0x00,0x00,0x6d,0x3a,0x0c,0xf3,0x01,
    0xff,0xff,0xff,0x92,0x94,0x00,0x00,0x00,0x00,0xe3,0x18,0x8e,0x73,0xcf,0x7b,0x24,
    0x90,0x03,0x0f,0x24,0x01,0x33,0x0c,0x90,0x00,0x6c,0x75,0xad,0xcb,0x5a,0xe3,0x18,
    0xfe,0x00,0x0c,0x90,0x00,0x11,0xb2,0x90,0x00,0x11,0xf7,0x96,0x0e,0x9b,0x5d,0xef,
    0x61,0x08,0x00,0x00,0x00,0x00,0x8e,0x44,0x01,0x0f,0x02,0x00,0x09,0x22,0x00,0x00,
    0x04,0x00,0x04,0x06,0x00,0x06,0x08,0x00,0x08,0x90,0x00,0x44,0x1c,0xe7,0xa6,0x31,
    0x12,0x01,0x0a,0x02,0x00,0x0c,0x90,0x00,0x82,0xf7,0xbd,0xcb,0x5a,0xcb,0x5a,0x7d,
    0xef,0x74,0x00,0x2f,0xc7,0x39,0x86,0x03,0x37,0x06,0x90,0x00,0x26,0x9e,0xf7,0x50,
    0x03,0x84,0xa2,0x10,0xe7,0x39,0x28,0x42,0x28,0x42,0x96,0x00,0x0c,0x90,0x00,0xe2,
    0xff,0xff,0xff,0xff,0x7d,0xef,0x55,0xad,0x30,0x84,0x8e,0x73,0x6d,0x6b,0x98,0x03,
    0x1d,0x8a,0x16,0x04,0x99,0x5d,0xef,0x14,0xa5,0x10,0x84,0x92,0x94,0x1c,0x4a,0x0f,
    0x0f,0x02,0x00,0x0b,0x06,0x90,0x00,0x24,0x30,0x84,0x7e,0x00,0x33,0x30,0x84,0xdf,
    0x35,0x00,0x04,0x12,0x00,0x0e,0x90,0x00,0x2c,0xef,0x7b,0xd4,0x01,0x0c,0x90,0x00,
    0x31,0x7d,0xef,0x20,0x64,0x02,0x33,0x00,0x00,0x20,0xda,0x01,0x0f,0x02,0x00,0x11,
    0x06,0x90,0x00,0x13,0x08,0x0e,0x01,0x17,0x45,0x44,0x0d,0x0f,0x90,0x00,0x05,0x22,
    0xef,0x7b,0x1a,0x00,0x62,0x08,0x42,0x8e,0x73,0xae,0x73,0x28,0x04,0x0c,0x90,0x00,
    0x22,0x5d,0xef,0x76,0x03,0x6a,0x14,0xa5,0x00,0x00,0x49,0x4a,0x8c,0x00,0x0f,0x40,
    0x02,0x11,0x22,0x65,0x29,0x64,0x00,0x24,0xa6,0x31,0x3c,0x00,0x22,0xba,0xd6,0x12,
    0x00,0x0c,0x20,0x01,0x39,0xdf,0xff,0x41,0xc2,0x02,0x11,0xe7,0x40,0x02,0x0c,0x90,
    0x00,0xd7,0xff,0xff,0xfb,0xde,0xb6,0xb5,0xf3,0x9c,0xcf,0x7b,0x00,0x00,0x65,0xe4,
    0x00,0x0f,0x02,0x00,0x0b,0x06,0x20,0x01,0x15,0x49,0xbe,0x06,0x95,0x71,0x8c,0x3c,
    0xe7,0xfb,0xde,0x92,0x94,0x82,0x40,0x06,0x19,0x4d,0xf0,0x03,0x22,0x3c,0xe7,0xa8,
    0x00,0x91,0x55,0xad,0xff,0xff,0xff,0xff,0xdf,0xff,0x45,0xca,0x00,0x0c,0x90,0x00,
    0xaf,0x7d,0xef,0x86,0x31,0x00,0x00,0x04,0x21,0x24,0x21,0x90,0x00,0x23,0x22,0xd3,
    0x9c,0x66,0x00,0x0f,0x02,0x00,0x03,0x44,0x04,0x21,0x96,0xb5,0xda,0x00,0x22,0xbe,
    0xf7,0x3c,0x02,0x62,0x45,0x29,0x34,0xa5,0xf3,0x9c,0x5e,0x03,0x64,0x00,0x00,0xe7,
    0x39,0xfb,0xde,0x22,0x00,0x04,0xa4,0x04,0x6e,0xcb,0x5a,0xff,0xff,0x79,0xce,0x90,
    0x00,0x0f,0xb0,0x01,0x11,0x13,0xdf,0x78,0x01,0x06,0x02,0x00,0x24,0x49,0x4a,0x6c,
    0x00,0x62,0x00,0x00,0x00,0x00,0xd3,0x9c,0x68,0x00,0x62,0xff,0xff,0xff,0xff,0x4d,
    0x6b,0x14,0x00,0x02,0x02,0x00,0x02,0x40,0x02,0x48,0x00,0x00,0x00,0x00,0x0a,0x08,
    0xf9,0x00,0xd3,0x9c,0x00,0x00,0x45,0x29,0xd3,0x9c,0x08,0x42,0x00,0x00,0xe3,0x18,
    0xdb,0xac,0x00,0x0f,0x02,0x00,0x07,0x06,0xb0,0x01,0x62,0xff,0xff,0xbe,0xf7,0x6d,
    0x6b,0x1a,0x02,0xa2,0x00,0x00,0x41,0x08,0xcf,0x7b,0xdf,0xff,0x71,0x8c,0x68,0x00,
    0x0c,0x90,0x00,0x42,0xbe,0xf7,0x2c,0x63,0x24,0x01,0x55,0x82,0x10,0x14,0xa5,0xf3,
    0x5a,0x01,0x08,0x90,0x00,0x22,0xbe,0xf7,0x22,0x03,0x11,0xcf,0x8a,0x03,0x28,0x0c,
    0x63,0x84,0x00,0x0f,0x20,0x01,0x11,0x02,0x02,0x00,0x88,0xbe,0xf7,0x18,0xc6,0x96,
    0xb5,0x18,0xc6,0x5a,0x00,0x0f,0x02,0x00,0x03,0x64,0x9e,0xf7,0x38,0xc6,0x79,0xce,
    0x1a,0x04,0x0f,0x02,0x00,0x03,0x24,0x5d,0xef,0x34,0x05,0x0f,0x02,0x00,0x15,0x08,
    0x20,0x01,0x0f,0x02,0x00,0x71,0x06,0x90,0x00,0xf4,0x2d,0xfe,0x07,0xfc,0x07,0xfa,
    0x07,0xf8,0x07,0xf6,0x07,0xf3,0x07,0xf1,0x07,0xef,0x07,0xed,0x07,0xeb,0x07,0xe9,
    0x07,0xe7,0x07,0xe5,0x07,0xe2,0x07,0xe0,0x07,0xe0,0x0f,0xe0,0x1f,0xe0,0x37,0xe0,
    0x47,0xe0,0x57,0xe0,0x67,0xe0,0x77,0xe0,0x87,0xe0,0x97,0xe0,0xaf,0xe0,0xbf,0xe0,
    0xcf,0xe0,0xdf,0xe0,0xef,0xe0,0xff,0x02,0x00,0xf7,0x28,0xe1,0xff,0xe2,0xff,0xe3,
    0xff,0xe4,0xff,0xe5,0xff,0xe6,0xff,0xe7,0xff,0xe9,0xff,0xea,0xff,0xeb,0xff,0xec,
    0xff,0xed,0xff,0xee,0xff,0xef,0xff,0xf0,0xff,0xf1,0xff,0xf2,0xff,0xf3,0xff,0xf4,
    0xff,0xf5,0xff,0xf6,0xff,0xf8,0xff,0xf9,0xff,0xfa,0xff,0xfb,0xff,0xfc,0xff,0xfd,
    0xff,0xfe,0x09,0x01,0x0f,0x90,0x00,0x47,0x1f,0xe8,0x90,0x00,0x36,0x1f,0xf4,0x20,
    0x01,0x32,0x0f,0x90,0x00,0xc7,0x0f,0x40,0x02,0x7d,0x0a,0xb0,0x01,0x1f,0xe4,0xd0,
    0x02,0x6e,0x0a,0x90,0x00,0x0f,0x60,0x03,0x6f,0x0a,0x90,0x00,0x0f,0x20,0x01,0x25,
    0x0f,0xd0,0x02,0x45,0x05,0x90,0x00,0x1f,0x27,0x80,0x04,0x73,0x0f,0x90,0x00,0x41,
    0x1f,0xf7,0x10,0x05,0x26,0x16,0xe6,0x90,0x00,0x0f,0xa0,0x05,0x38,0x3f,0xf7,0xff,
    0xf7,0xa0,0x05,0x24,0x0f,0x90,0x00,0x45,0x0f,0x30,0x06,0x19,0x08,0xd0,0x02,0x0f,
    0x90,0x00,0x43,0x0f,0xc0,0x06,0x1b,0x06,0x90,0x00,0x1f,0xe8,0x90,0x00,0x07,0x1f,
    0x9f,0x50,0x07,0x2b,0x0f,0xb0,0x01,0x0f,0x0f,0x02,0x00,0x73,0x06,0xe0,0x07,0x0f,
    0x02,0x00,0x73,0x0f,0x90,0x00,0x83,0x0f,0x02,0x00,0x76,0x50,0x07,0xe0,0x07,0x00,
    0x00,

};

const lv_image_dsc_t test_RGB565_LZ4_align64 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565,
  .header.flags = 0 | LV_IMAGE_FLAGS_COMPRESSED,
  .header.w = 71,
  .header.h = 60,
  .header.stride = 144,
  .data_size = sizeof(test_RGB565_LZ4_align64_map),
  .data = test_RGB565_LZ4_align64_map,
};
