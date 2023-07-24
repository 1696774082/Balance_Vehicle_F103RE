/*******************************************************************************
 * Size: 12 px
 * Bpp: 2
 * Opts: --bpp 2 --size 12 --font E:\DOC\SquareLine\assets\微软雅黑.ttf -o E:\DOC\SquareLine\assets\ui_font_chinese.c --format lvgl -r 0x20-0x7f --symbols 直立环速度 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_CHINESE
#define UI_FONT_CHINESE 1
#endif

#if UI_FONT_CHINESE

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x99, 0x99, 0x99, 0x90, 0x49,

    /* U+0022 "\"" */
    0xae, 0x79, 0xc0,

    /* U+0023 "#" */
    0x3, 0x20, 0x2, 0x30, 0x5, 0x30, 0x3f, 0xfc,
    0xc, 0x50, 0xc, 0x90, 0xbf, 0xf8, 0x18, 0xc0,
    0x24, 0x80, 0x0, 0x0,

    /* U+0024 "$" */
    0x8, 0x2, 0xf8, 0xa8, 0x4c, 0x80, 0xe8, 0x3,
    0xc0, 0xf, 0x40, 0x9c, 0x8, 0xc8, 0x9c, 0xbf,
    0x0, 0x80, 0x4, 0x0,

    /* U+0025 "%" */
    0x2f, 0x2, 0x41, 0x86, 0xc, 0x5, 0x8, 0x90,
    0x18, 0x66, 0x0, 0x2e, 0x30, 0x0, 0x1, 0x8b,
    0x40, 0xc, 0xc3, 0x0, 0x93, 0x8, 0x3, 0xc,
    0x30, 0x30, 0x1f, 0x40,

    /* U+0026 "&" */
    0x7, 0xe0, 0x0, 0x30, 0xd0, 0x0, 0xc2, 0x48,
    0x3, 0xac, 0x34, 0xb, 0xd0, 0xc0, 0xa1, 0xd3,
    0x3, 0x0, 0xe4, 0xc, 0x2, 0xc0, 0x38, 0x2f,
    0x40, 0x2f, 0x83, 0xc0,

    /* U+0027 "'" */
    0x30, 0xc3, 0x0,

    /* U+0028 "(" */
    0x6, 0xc, 0x24, 0x30, 0x30, 0x30, 0x30, 0x30,
    0x24, 0x18, 0xc, 0x1,

    /* U+0029 ")" */
    0xa0, 0x30, 0x18, 0xc, 0xc, 0xc, 0xc, 0xc,
    0x18, 0x24, 0x30, 0x40,

    /* U+002A "*" */
    0x8, 0x6, 0x51, 0xe4, 0x6c, 0x11, 0x0,

    /* U+002B "+" */
    0x3, 0x0, 0xc, 0x0, 0x30, 0x1f, 0xfd, 0x3,
    0x0, 0xc, 0x0, 0x10, 0x0,

    /* U+002C "," */
    0x10, 0xc6, 0x20,

    /* U+002D "-" */
    0x3f, 0x40,

    /* U+002E "." */
    0x10, 0xc0,

    /* U+002F "/" */
    0x0, 0x30, 0x1, 0x80, 0xc, 0x0, 0x30, 0x2,
    0x40, 0xc, 0x0, 0x60, 0x3, 0x40, 0xc, 0x0,
    0x90, 0x3, 0x0, 0x0,

    /* U+0030 "0" */
    0xb, 0xc0, 0xa1, 0xc3, 0x3, 0x5c, 0xd, 0x60,
    0x25, 0x80, 0x97, 0x3, 0x4c, 0xc, 0x38, 0xb0,
    0x3f, 0x0,

    /* U+0031 "1" */
    0x8, 0xf, 0xd0, 0xd, 0x0, 0xd0, 0xd, 0x0,
    0xd0, 0xd, 0x0, 0xd0, 0xd, 0xf, 0xfd,

    /* U+0032 "2" */
    0x1f, 0xc0, 0x81, 0xc0, 0x3, 0x0, 0xc, 0x0,
    0x60, 0x7, 0x0, 0x30, 0x3, 0x40, 0x34, 0x1,
    0xff, 0xc0,

    /* U+0033 "3" */
    0x2f, 0x80, 0x42, 0x80, 0x7, 0x0, 0x34, 0x1f,
    0x80, 0x2, 0x80, 0x3, 0x0, 0xc, 0x10, 0xa0,
    0xfe, 0x0,

    /* U+0034 "4" */
    0x0, 0xd0, 0xb, 0x40, 0x79, 0x3, 0x24, 0x18,
    0x90, 0xc2, 0x4a, 0x9, 0x3f, 0xfe, 0x0, 0x90,
    0x2, 0x40,

    /* U+0035 "5" */
    0xbf, 0xc9, 0x0, 0x90, 0x9, 0x0, 0xbe, 0x0,
    0x2c, 0x0, 0xc0, 0xc, 0x42, 0xcf, 0xe0,

    /* U+0036 "6" */
    0x7, 0xf0, 0x34, 0x3, 0x40, 0xc, 0x0, 0x37,
    0xd1, 0xe1, 0xc3, 0x2, 0x4c, 0x9, 0x28, 0x70,
    0x2f, 0x40,

    /* U+0037 "7" */
    0x7f, 0xf4, 0x0, 0xc0, 0x6, 0x0, 0x34, 0x0,
    0xc0, 0xa, 0x0, 0x30, 0x1, 0xc0, 0x9, 0x0,
    0x30, 0x0,

    /* U+0038 "8" */
    0xb, 0xd0, 0xe1, 0xc3, 0x3, 0xe, 0x1c, 0xf,
    0xc0, 0xbb, 0x83, 0x3, 0x5c, 0xd, 0x34, 0x70,
    0x7f, 0x40,

    /* U+0039 "9" */
    0xf, 0xc0, 0xd2, 0xc7, 0x3, 0x1c, 0xd, 0x34,
    0x74, 0x7e, 0xd0, 0x3, 0x0, 0xc, 0x10, 0xd0,
    0xfd, 0x0,

    /* U+003A ":" */
    0x30, 0x40, 0x0, 0x0, 0x43, 0x0,

    /* U+003B ";" */
    0x30, 0x40, 0x0, 0x0, 0x43, 0x18, 0x80,

    /* U+003C "<" */
    0x0, 0x0, 0x1, 0xc0, 0x38, 0xb, 0x40, 0x28,
    0x0, 0x1e, 0x0, 0x7, 0x0, 0x0,

    /* U+003D "=" */
    0x7f, 0xf4, 0x0, 0x0, 0x0, 0x1f, 0xfd,

    /* U+003E ">" */
    0x0, 0x0, 0xd0, 0x0, 0xa0, 0x0, 0x78, 0x1,
    0xe0, 0x78, 0x7, 0x40, 0x0, 0x0,

    /* U+003F "?" */
    0x2f, 0x41, 0x1c, 0x0, 0xc0, 0x1c, 0x7, 0x0,
    0xc0, 0xc, 0x0, 0x0, 0x4, 0x0, 0xd0,

    /* U+0040 "@" */
    0x2, 0xfe, 0x0, 0x34, 0x7, 0x3, 0x0, 0x6,
    0x18, 0x3e, 0x4c, 0x83, 0xd, 0x27, 0x18, 0x20,
    0x9c, 0x60, 0xc3, 0x30, 0xc7, 0x48, 0x92, 0xe7,
    0x80, 0xc0, 0x0, 0x1, 0xd0, 0x10, 0x0, 0xbf,
    0x80,

    /* U+0041 "A" */
    0x2, 0xc0, 0x0, 0xf4, 0x0, 0x76, 0x0, 0x28,
    0xc0, 0xc, 0x34, 0x7, 0x6, 0x2, 0xff, 0xc0,
    0xd0, 0x34, 0x70, 0x7, 0x28, 0x0, 0xc0,

    /* U+0042 "B" */
    0xff, 0x8d, 0x1d, 0xd0, 0xdd, 0x1c, 0xff, 0x4d,
    0x1d, 0xd0, 0x7d, 0x7, 0xd0, 0xdf, 0xf8,

    /* U+0043 "C" */
    0x2, 0xfd, 0xe, 0x4, 0x38, 0x0, 0x30, 0x0,
    0x70, 0x0, 0x70, 0x0, 0x70, 0x0, 0x34, 0x0,
    0x1d, 0x5, 0x7, 0xfc,

    /* U+0044 "D" */
    0xff, 0x80, 0xd0, 0xb4, 0xd0, 0x1c, 0xd0, 0xd,
    0xd0, 0xa, 0xd0, 0xe, 0xd0, 0xd, 0xd0, 0x1c,
    0xd0, 0xb4, 0xff, 0x80,

    /* U+0045 "E" */
    0xff, 0xcd, 0x0, 0xd0, 0xd, 0x0, 0xd0, 0xf,
    0xf8, 0xd0, 0xd, 0x0, 0xd0, 0xf, 0xfc,

    /* U+0046 "F" */
    0xff, 0xf4, 0xd, 0x3, 0x40, 0xd0, 0x3f, 0xed,
    0x3, 0x40, 0xd0, 0x34, 0x0,

    /* U+0047 "G" */
    0x2, 0xfe, 0x3, 0x81, 0x83, 0x80, 0x0, 0xc0,
    0x0, 0x70, 0x0, 0x1c, 0xf, 0xc7, 0x0, 0x70,
    0xd0, 0xc, 0x1e, 0x7, 0x1, 0xff, 0x40,

    /* U+0048 "H" */
    0xd0, 0xc, 0xd0, 0xc, 0xd0, 0xc, 0xd0, 0xc,
    0xd0, 0xc, 0xff, 0xfc, 0xd0, 0xc, 0xd0, 0xc,
    0xd0, 0xc, 0xd0, 0xc,

    /* U+0049 "I" */
    0xbc, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34,
    0x34, 0xbc,

    /* U+004A "J" */
    0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa,
    0xc, 0xf4,

    /* U+004B "K" */
    0xd0, 0x73, 0x47, 0xd, 0x34, 0x36, 0x80, 0xfc,
    0x3, 0xb0, 0xd, 0xb0, 0x34, 0xe0, 0xd0, 0xd3,
    0x41, 0xc0,

    /* U+004C "L" */
    0xd0, 0x34, 0xd, 0x3, 0x40, 0xd0, 0x34, 0xd,
    0x3, 0x40, 0xd0, 0x3f, 0xf0,

    /* U+004D "M" */
    0xf0, 0x0, 0xef, 0x40, 0x2e, 0xe8, 0x3, 0xad,
    0xc0, 0x6a, 0xda, 0xd, 0xad, 0x70, 0xca, 0xd3,
    0x68, 0xad, 0x1b, 0xa, 0xd0, 0xf0, 0xad, 0x9,
    0xa,

    /* U+004E "N" */
    0xf0, 0xa, 0xf8, 0xa, 0xec, 0xa, 0xda, 0xa,
    0xd3, 0x4a, 0xd1, 0xca, 0xd0, 0xda, 0xd0, 0x7a,
    0xd0, 0x2e, 0xd0, 0xe,

    /* U+004F "O" */
    0x2, 0xf8, 0x1, 0xe0, 0xb0, 0x38, 0x2, 0x83,
    0x0, 0xc, 0x70, 0x0, 0xc7, 0x0, 0xc, 0x70,
    0x0, 0xc3, 0x40, 0x28, 0x1d, 0xb, 0x0, 0x7f,
    0x80,

    /* U+0050 "P" */
    0xff, 0x8d, 0x1d, 0xd0, 0x7d, 0x6, 0xd0, 0xdf,
    0xf4, 0xd0, 0xd, 0x0, 0xd0, 0xd, 0x0,

    /* U+0051 "Q" */
    0x2, 0xf8, 0x1, 0xe0, 0xb0, 0x38, 0x2, 0x83,
    0x0, 0xc, 0x70, 0x0, 0xc7, 0x0, 0xc, 0x30,
    0x0, 0xc3, 0x40, 0x28, 0x1d, 0xb, 0x0, 0x7f,
    0x80, 0x0, 0x2c, 0x0, 0x0, 0xbd, 0x0, 0x0,
    0x0,

    /* U+0052 "R" */
    0xff, 0x83, 0x47, 0x4d, 0xa, 0x34, 0x28, 0xd0,
    0xd3, 0xfd, 0xd, 0x38, 0x34, 0x34, 0xd0, 0x73,
    0x40, 0xd0,

    /* U+0053 "S" */
    0xb, 0xf0, 0xe0, 0x43, 0x0, 0xd, 0x0, 0x1f,
    0x0, 0xb, 0x40, 0x7, 0x0, 0xd, 0x20, 0x70,
    0xff, 0x0,

    /* U+0054 "T" */
    0xff, 0xf8, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x3,
    0x0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0,
    0xc, 0x0,

    /* U+0055 "U" */
    0xc0, 0x1f, 0x0, 0x7c, 0x1, 0xf0, 0x7, 0xc0,
    0x1f, 0x0, 0x7d, 0x1, 0xe8, 0xa, 0x74, 0x74,
    0x7f, 0x40,

    /* U+0056 "V" */
    0xa0, 0x7, 0x1c, 0x2, 0x83, 0x0, 0xc0, 0xd0,
    0x70, 0x1c, 0x28, 0x3, 0xc, 0x0, 0xd7, 0x0,
    0x1a, 0x80, 0x3, 0xc0, 0x0, 0xf0, 0x0,

    /* U+0057 "W" */
    0xa0, 0x1c, 0x7, 0x1c, 0xf, 0x2, 0x83, 0x3,
    0xd0, 0xd0, 0xd1, 0xd8, 0x30, 0x28, 0xa3, 0x1c,
    0x7, 0x34, 0xc6, 0x0, 0xcc, 0x26, 0x40, 0x3b,
    0x6, 0xc0, 0xb, 0x80, 0xf0, 0x1, 0xd0, 0x38,
    0x0,

    /* U+0058 "X" */
    0x70, 0xc, 0x38, 0x28, 0xc, 0x30, 0xa, 0xa0,
    0x3, 0xc0, 0x3, 0xc0, 0xa, 0xa0, 0x1c, 0x30,
    0x34, 0x28, 0xb0, 0xd,

    /* U+0059 "Y" */
    0xa0, 0x1c, 0x30, 0x34, 0x38, 0x30, 0x1c, 0xa0,
    0xe, 0xc0, 0x7, 0x80, 0x3, 0x0, 0x3, 0x0,
    0x3, 0x0, 0x3, 0x0,

    /* U+005A "Z" */
    0x7f, 0xfc, 0x0, 0x34, 0x0, 0x70, 0x0, 0xd0,
    0x2, 0x80, 0x7, 0x0, 0xd, 0x0, 0x2c, 0x0,
    0x34, 0x0, 0xbf, 0xfc,

    /* U+005B "[" */
    0xba, 0x49, 0x24, 0x92, 0x49, 0x24, 0x92, 0x49,
    0x2e,

    /* U+005C "\\" */
    0x30, 0x0, 0x90, 0x0, 0xc0, 0x3, 0x40, 0x6,
    0x0, 0xc, 0x0, 0x24, 0x0, 0x30, 0x0, 0xc0,
    0x1, 0x80, 0x3, 0x0,

    /* U+005D "]" */
    0xbc, 0x71, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xee,

    /* U+005E "^" */
    0x1, 0x0, 0x1c, 0x0, 0xd8, 0x6, 0x30, 0x30,
    0x61, 0x80, 0xc0,

    /* U+005F "_" */
    0xff, 0xd0,

    /* U+0060 "`" */
    0x30, 0x8,

    /* U+0061 "a" */
    0x1f, 0x81, 0xa, 0x0, 0xa2, 0xef, 0x70, 0x77,
    0xf, 0x2f, 0xb0,

    /* U+0062 "b" */
    0xc0, 0x3, 0x0, 0xc, 0x0, 0x37, 0xe0, 0xf0,
    0xa3, 0x40, 0xcc, 0x3, 0x30, 0x1c, 0xe0, 0xa3,
    0x7e, 0x0,

    /* U+0063 "c" */
    0xb, 0xd3, 0x80, 0x30, 0x7, 0x0, 0x70, 0x3,
    0x80, 0xb, 0xd0,

    /* U+0064 "d" */
    0x0, 0x28, 0x0, 0xa0, 0x2, 0x82, 0xfa, 0x38,
    0x38, 0xc0, 0xa7, 0x1, 0x9c, 0xa, 0x34, 0x38,
    0x7e, 0xa0,

    /* U+0065 "e" */
    0xb, 0xc0, 0xe1, 0xc3, 0x3, 0x1f, 0xfd, 0x70,
    0x0, 0xd0, 0x40, 0xfd, 0x0,

    /* U+0066 "f" */
    0xb, 0x47, 0x2, 0x82, 0xfc, 0x28, 0xa, 0x2,
    0x80, 0xa0, 0x28, 0xa, 0x0,

    /* U+0067 "g" */
    0xb, 0xe8, 0xe0, 0xe3, 0x2, 0x9c, 0xa, 0x70,
    0x28, 0xd1, 0xe0, 0xfa, 0x80, 0x9, 0x10, 0x70,
    0xbf, 0x0,

    /* U+0068 "h" */
    0xc0, 0xc, 0x0, 0xc0, 0xd, 0xf8, 0xe0, 0xdd,
    0x9, 0xc0, 0xac, 0xa, 0xc0, 0xac, 0xa,

    /* U+0069 "i" */
    0x30, 0x40, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc0,

    /* U+006A "j" */
    0x3, 0x0, 0x40, 0x0, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0x1c, 0x3c,
    0x0,

    /* U+006B "k" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0x2c, 0xc7, 0xd,
    0xc0, 0xf8, 0xd, 0xd0, 0xc7, 0x4c, 0x1c,

    /* U+006C "l" */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc,

    /* U+006D "m" */
    0xdf, 0x5f, 0x8e, 0xe, 0xc, 0xc0, 0xd0, 0xdc,
    0xd, 0xd, 0xc0, 0xd0, 0xdc, 0xd, 0xd, 0xc0,
    0xd0, 0xd0,

    /* U+006E "n" */
    0xdf, 0x8e, 0xd, 0xc0, 0x9c, 0xa, 0xc0, 0xac,
    0xa, 0xc0, 0xa0,

    /* U+006F "o" */
    0xb, 0xe0, 0x38, 0x38, 0x30, 0x1c, 0x70, 0xc,
    0x70, 0x1c, 0x38, 0x34, 0xb, 0xd0,

    /* U+0070 "p" */
    0xdf, 0x83, 0x82, 0x8d, 0x3, 0x30, 0xc, 0xd0,
    0x73, 0xc3, 0x8d, 0xf8, 0x30, 0x0, 0xc0, 0x3,
    0x0, 0x0,

    /* U+0071 "q" */
    0xb, 0xe8, 0xe0, 0xe3, 0x2, 0x9c, 0xa, 0x70,
    0x28, 0xd1, 0xe1, 0xfa, 0x80, 0xa, 0x0, 0x28,
    0x0, 0xa0,

    /* U+0072 "r" */
    0x0, 0xde, 0xe0, 0xd0, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0073 "s" */
    0x1f, 0x83, 0x0, 0x34, 0x1, 0xf0, 0x2, 0xc0,
    0x1c, 0x3f, 0x40,

    /* U+0074 "t" */
    0x0, 0x5, 0x2, 0x82, 0xfc, 0x28, 0xa, 0x2,
    0x80, 0xa0, 0x28, 0x3, 0xc0,

    /* U+0075 "u" */
    0x30, 0x34, 0xc0, 0xd3, 0x3, 0x4c, 0xd, 0x30,
    0x34, 0xd1, 0xd1, 0xfb, 0x40,

    /* U+0076 "v" */
    0xa0, 0x31, 0xc1, 0x83, 0xd, 0x9, 0x30, 0x1d,
    0x80, 0x3c, 0x0, 0xb0, 0x0,

    /* U+0077 "w" */
    0x90, 0xd0, 0xc6, 0xe, 0xc, 0x31, 0xb1, 0x83,
    0x22, 0x64, 0x27, 0x1b, 0x1, 0xe0, 0xf0, 0xd,
    0xe, 0x0,

    /* U+0078 "x" */
    0x70, 0xa3, 0x4c, 0x1e, 0x40, 0xf0, 0xf, 0x43,
    0x5c, 0xb0, 0xa0,

    /* U+0079 "y" */
    0xa0, 0x31, 0xc1, 0x83, 0x9, 0xa, 0x30, 0xd,
    0x80, 0x3c, 0x0, 0xb0, 0x2, 0x40, 0x1c, 0x2,
    0xd0, 0x0,

    /* U+007A "z" */
    0x7f, 0xd0, 0x1c, 0x3, 0x0, 0xa0, 0x1c, 0x3,
    0x0, 0xbf, 0xe0,

    /* U+007B "{" */
    0xa, 0x18, 0x18, 0x18, 0x24, 0x70, 0x24, 0x18,
    0x18, 0x18, 0x1c, 0xa,

    /* U+007C "|" */
    0x4c, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,

    /* U+007D "}" */
    0xa0, 0x24, 0x24, 0x24, 0x18, 0xd, 0x18, 0x24,
    0x24, 0x24, 0x24, 0xa0,

    /* U+007E "~" */
    0x3e, 0x16, 0x4b, 0xc0,

    /* U+007F "" */

    /* U+5EA6 "度" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0x80, 0x0, 0xbf,
    0xff, 0xf0, 0x30, 0x80, 0x80, 0xe, 0xff, 0xff,
    0x3, 0xc, 0xc, 0x0, 0xc3, 0xff, 0x0, 0x30,
    0x40, 0x40, 0xc, 0xff, 0xfc, 0x3, 0x9, 0x1c,
    0x1, 0x80, 0xbc, 0x0, 0xd6, 0xe6, 0xe8, 0x12,
    0x40, 0x5, 0x0,

    /* U+73AF "环" */
    0x3f, 0xdf, 0xff, 0x1, 0x80, 0x30, 0x0, 0x60,
    0x18, 0x0, 0xbf, 0xd, 0x0, 0x6, 0x2, 0xe8,
    0x1, 0x83, 0x33, 0x40, 0x79, 0x8c, 0x70, 0xba,
    0xc3, 0x9, 0x10, 0x10, 0xc0, 0x0, 0x0, 0x30,
    0x0, 0x0, 0xc, 0x0,

    /* U+76F4 "直" */
    0x0, 0x18, 0x0, 0x7f, 0xff, 0xfe, 0x0, 0x18,
    0x0, 0xf, 0xff, 0xf4, 0xc, 0x0, 0x24, 0xf,
    0xff, 0xf4, 0xc, 0x0, 0x24, 0xe, 0xaa, 0xb4,
    0xd, 0x55, 0x74, 0xc, 0x0, 0x24, 0xbf, 0xff,
    0xff,

    /* U+7ACB "立" */
    0x0, 0x0, 0x0, 0x0, 0x34, 0x0, 0x0, 0x18,
    0x0, 0x3f, 0xff, 0xfe, 0x0, 0x0, 0x10, 0xa,
    0x0, 0x30, 0x3, 0x0, 0x60, 0x3, 0x40, 0xd0,
    0x1, 0x80, 0xc0, 0x0, 0xc2, 0x40, 0x0, 0x3,
    0x0, 0x7f, 0xff, 0xff,

    /* U+901F "速" */
    0x20, 0x3, 0x0, 0x18, 0xff, 0xfe, 0x8, 0x3,
    0x0, 0x0, 0xbf, 0xfc, 0x78, 0xc3, 0xc, 0xc,
    0xeb, 0xac, 0xc, 0x4b, 0x48, 0xc, 0x2b, 0xa0,
    0xc, 0xd3, 0x1d, 0x2d, 0x3, 0x0, 0x62, 0xff,
    0xfe, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 57, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 60, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 84, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 8, .adv_w = 123, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 113, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 48, .adv_w = 171, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 167, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 49, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 107, .adv_w = 64, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 119, .adv_w = 64, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 131, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 138, .adv_w = 142, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 46, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 154, .adv_w = 83, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 156, .adv_w = 46, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 82, .box_w = 7, .box_h = 11, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 178, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 46, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 365, .adv_w = 142, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 142, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 386, .adv_w = 142, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 93, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 198, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 448, .adv_w = 135, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 146, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 106, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 102, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 143, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 56, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 76, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 648, .adv_w = 188, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 156, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 718, .adv_w = 117, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 733, .adv_w = 156, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 766, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 143, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 130, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 195, .box_w = 13, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 894, .adv_w = 124, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 116, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 934, .adv_w = 119, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 954, .adv_w = 64, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 963, .adv_w = 80, .box_w = 7, .box_h = 11, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 983, .adv_w = 64, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 992, .adv_w = 142, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1003, .adv_w = 86, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1005, .adv_w = 57, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1007, .adv_w = 106, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1018, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1036, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1047, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 109, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1078, .adv_w = 67, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1109, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1124, .adv_w = 51, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1132, .adv_w = 51, .box_w = 5, .box_h = 13, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 1149, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1164, .adv_w = 51, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1169, .adv_w = 180, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 118, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1198, .adv_w = 122, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1212, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1230, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1248, .adv_w = 73, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1256, .adv_w = 89, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1267, .adv_w = 72, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1280, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1293, .adv_w = 101, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1306, .adv_w = 152, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1324, .adv_w = 97, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1335, .adv_w = 102, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1353, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1364, .adv_w = 64, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1376, .adv_w = 52, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1383, .adv_w = 64, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1395, .adv_w = 142, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1399, .adv_w = 57, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1399, .adv_w = 192, .box_w = 13, .box_h = 13, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1442, .adv_w = 192, .box_w = 13, .box_h = 11, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1478, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1511, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1547, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x1509, 0x184e, 0x1c25, 0x3179
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 24230, .range_length = 12666, .glyph_id_start = 97,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 5, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 83,
    3, 84,
    8, 83,
    8, 84,
    9, 75,
    11, 34,
    11, 43,
    11, 68,
    11, 69,
    11, 70,
    11, 72,
    11, 80,
    11, 82,
    34, 11,
    34, 13,
    34, 28,
    34, 36,
    34, 40,
    34, 43,
    34, 48,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 59,
    34, 85,
    34, 87,
    34, 88,
    34, 90,
    35, 53,
    35, 58,
    36, 32,
    36, 36,
    36, 40,
    36, 48,
    36, 50,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 57,
    37, 59,
    38, 34,
    38, 43,
    38, 53,
    38, 56,
    38, 57,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 52,
    39, 53,
    39, 66,
    39, 71,
    40, 53,
    40, 55,
    40, 90,
    43, 13,
    43, 15,
    43, 34,
    43, 43,
    43, 66,
    44, 13,
    44, 28,
    44, 36,
    44, 40,
    44, 43,
    44, 48,
    44, 50,
    44, 57,
    44, 59,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 80,
    44, 82,
    44, 85,
    44, 87,
    44, 88,
    44, 90,
    45, 11,
    45, 32,
    45, 34,
    45, 36,
    45, 40,
    45, 43,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 59,
    45, 85,
    45, 87,
    45, 88,
    45, 90,
    48, 13,
    48, 15,
    48, 34,
    48, 43,
    48, 53,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 40,
    49, 43,
    49, 56,
    49, 57,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    49, 82,
    50, 13,
    50, 15,
    50, 34,
    50, 53,
    50, 57,
    50, 58,
    50, 59,
    51, 28,
    51, 36,
    51, 40,
    51, 43,
    51, 48,
    51, 50,
    51, 53,
    51, 58,
    51, 68,
    51, 69,
    51, 70,
    51, 72,
    51, 80,
    51, 82,
    52, 85,
    52, 87,
    52, 88,
    52, 90,
    53, 13,
    53, 15,
    53, 27,
    53, 28,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 53,
    53, 55,
    53, 56,
    53, 57,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 71,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 34,
    55, 13,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 48,
    55, 50,
    55, 52,
    55, 53,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 78,
    55, 79,
    55, 80,
    55, 81,
    55, 82,
    55, 83,
    55, 84,
    55, 86,
    56, 13,
    56, 15,
    56, 34,
    56, 53,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    57, 13,
    57, 15,
    57, 28,
    57, 36,
    57, 40,
    57, 43,
    57, 48,
    57, 50,
    57, 53,
    58, 13,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    59, 43,
    59, 53,
    59, 90,
    60, 75,
    67, 66,
    67, 71,
    67, 89,
    68, 43,
    68, 53,
    68, 58,
    70, 3,
    70, 8,
    71, 10,
    71, 13,
    71, 14,
    71, 15,
    71, 27,
    71, 28,
    71, 32,
    71, 62,
    71, 67,
    71, 73,
    71, 85,
    71, 87,
    71, 88,
    71, 89,
    71, 90,
    71, 94,
    72, 75,
    75, 75,
    76, 13,
    76, 14,
    76, 15,
    76, 27,
    76, 28,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 80,
    76, 82,
    76, 85,
    79, 3,
    79, 8,
    80, 3,
    80, 8,
    80, 66,
    80, 71,
    80, 89,
    81, 66,
    81, 71,
    81, 89,
    82, 75,
    83, 13,
    83, 14,
    83, 15,
    83, 27,
    83, 28,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 72,
    83, 78,
    83, 79,
    83, 80,
    83, 82,
    83, 84,
    83, 85,
    83, 87,
    83, 88,
    83, 89,
    83, 90,
    83, 91,
    85, 14,
    85, 32,
    85, 68,
    85, 69,
    85, 70,
    85, 72,
    85, 80,
    85, 82,
    85, 89,
    86, 3,
    86, 8,
    87, 13,
    87, 15,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 72,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    88, 68,
    88, 69,
    88, 70,
    88, 72,
    88, 80,
    88, 82,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    89, 82,
    90, 3,
    90, 8,
    90, 13,
    90, 15,
    90, 32,
    90, 68,
    90, 69,
    90, 70,
    90, 71,
    90, 72,
    90, 80,
    90, 82,
    90, 85,
    92, 75
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -5, -7, -5, -7, 24, -17, -16, -10,
    -10, -10, -10, -10, -10, -13, 7, 7,
    -3, -3, 10, -3, -15, -3, -12, -7,
    -16, 6, -3, -4, -3, -4, -9, -7,
    0, -6, -6, -3, -6, -13, -13, -3,
    -9, -5, -5, 1, 7, 0, 3, 1,
    -16, -16, -13, -7, -3, 1, -8, 1,
    -5, -3, -3, -10, -10, -4, -7, -3,
    4, 4, -9, -9, 9, -9, -9, 4,
    4, -3, -3, -3, -3, -3, -3, -5,
    -7, -5, -9, -21, -10, 6, -7, -7,
    10, -7, -7, -11, -3, -12, -5, -13,
    6, -3, -10, -7, -8, -9, -9, -3,
    -1, -9, -4, -3, -5, -33, -33, -16,
    -1, -13, 4, -6, -7, -8, -8, -8,
    -8, -8, -7, -9, -13, -3, -9, -4,
    -1, -5, 8, -3, -3, 6, -2, -2,
    -5, -4, -5, -5, -6, -6, -6, -5,
    -7, -5, -3, -5, -13, -18, -2, -2,
    -16, -9, -9, -11, -9, -9, 4, 4,
    4, -1, 3, -22, -21, -21, -21, -10,
    -21, -18, -18, -21, -18, -21, -18, -16,
    -18, -10, -11, -18, -11, -13, -4, -21,
    -23, -12, -4, -4, -7, -1, -4, -3,
    4, -15, -13, -13, -13, -13, -8, -8,
    -13, -8, -13, -8, -7, -8, -12, -13,
    -7, 4, -8, -5, -5, -5, -5, -5,
    -5, 7, 6, 8, -2, -2, 10, -2,
    -2, 3, -18, -20, -16, -5, -5, -7,
    -5, -5, -3, 4, -20, -18, -18, -18,
    -3, -18, -14, -14, -18, -14, -18, -14,
    -13, -14, 8, 4, -5, 24, -3, -1,
    -3, 7, -10, -8, -10, -10, 14, -13,
    -10, -13, 8, 8, 7, 14, 2, 2,
    4, 4, 4, 2, 3, 8, 5, 4,
    8, -14, 8, 8, 8, -4, -3, -4,
    -4, -4, -3, -2, -10, -10, -15, -15,
    -3, -4, -3, -3, -4, -3, 10, -16,
    -13, -17, 8, 8, -3, -3, -3, 4,
    -3, 0, 0, -3, -3, 1, 6, 8,
    8, 6, 8, 4, -11, -5, -3, -3,
    -2, -2, -2, -2, 3, -7, -7, -12,
    -13, -4, -1, -2, -1, -1, -1, -2,
    -9, -10, -1, -1, -1, -1, -1, -1,
    -2, -2, -2, -2, -2, -2, 3, 3,
    -10, -13, -8, -1, -1, -1, 0, -1,
    -1, -1, 1, 21
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 372,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_chinese = {
#else
lv_font_t ui_font_chinese = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_CHINESE*/

