

/*
 *
 * arab10x16
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : arabb10x16.h
 * Date                : 14.02.2019
 * Font size in bytes  : 1777
 * Font width          : 10
 * Font height         : -16
 * Font first char     : 48
 * Font last char      : 59
 * Font used chars     : 11
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef ARAB10X16_H
#define ARAB10X16_H

#define ARAB10X16_WIDTH 10
#define ARAB10X16_HEIGHT 16

#define arab10x16 arab10x16

const static uint8_t arab10x16[] PROGMEM = {
    0x06, 0xF1, // size
    0x0A, // width
    0x0F, // height
    0x30, // first char
    0x0B, // char count
    
    // char widths
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 
    0x0A, 
    
    // font data
    0x00, 0x00, 0x80, 0xC0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, // 48
    0x00, 0x00, 0x0F, 0x3E, 0x7C, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x3F, 0xFC, 0x00, // 49
    0x1C, 0x3E, 0x7C, 0xF0, 0xF0, 0x70, 0x38, 0x1C, 0x06, 0x01, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x7F, 0xF0, 0x00, 0x00, 0x00, // 50
    0x0E, 0x3C, 0xF8, 0xF0, 0x38, 0x1C, 0x3F, 0x38, 0x1E, 0x0F, 0x00, 0x00, 0x03, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0xF0, 0xF8, 0xCC, 0xC6, 0x83, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xFF, 0xE7, 0xE1, 0x60, 0x60, 0x20, 0x10, // 52
    0x00, 0xC0, 0xE0, 0x3C, 0x3E, 0x3E, 0x3E, 0x7C, 0xF0, 0xC0, 0x1F, 0x7F, 0xF0, 0xF0, 0xF0, 0xF0, 0x70, 0x30, 0x1F, 0x07, // 53
    0x06, 0x0F, 0x0E, 0x0E, 0x0E, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0x7C, 0x70, 0x00, // 54
    0x1F, 0x7E, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0xE0, 0x7E, 0x0F, 0x00, 0x00, 0x00, 0x03, 0x1F, 0xFE, 0x7F, 0x03, 0x00, 0x00, // 55
    0x00, 0x00, 0xC0, 0xFE, 0x7F, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0xF0, 0x7E, 0x07, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x7E, 0xF8, // 56
    0x3C, 0x6E, 0xC7, 0x83, 0x83, 0xCE, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x3F, 0x78, 0xF0, // 57
    0x00, 0x00, 0x00, 0x70, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00 // 58
    
};

#endif
