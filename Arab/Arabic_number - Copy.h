

/*
 *
 * Arabic_number
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Arabic_number.h
 * Date                : 03.11.2018
 * Font size in bytes  : 1457
 * Font width          : 8
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

#ifndef ARABIC_NUMBER_H
#define ARABIC_NUMBER_H

#define ARABIC_NUMBER_WIDTH 8
#define ARABIC_NUMBER_HEIGHT -16

const static uint8_t Arabic_number[] PROGMEM = {
    0x05, 0xB1, // size
    0x08, // width
    0x10, // height
    0x30, // first char
    0x0B, // char count
    
    // char widths
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x09, 0x08, 
    0x08, 
    
    // font data
    0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x1E, 0x3F, 0x67, 0x67, 0x3F, 0x1E, 0x0C, // 48
    0x07, 0x1F, 0x7F, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0xFE, 0xF0, 0x00, // 49
    0x0E, 0x1C, 0x78, 0xF8, 0xF8, 0x1C, 0x0E, 0x07, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x7C, 0xF0, // 50
    0x1E, 0x7C, 0xF8, 0xDE, 0x9E, 0x18, 0x0E, 0x07, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1E, 0x78, 0xF0, // 51
    0x78, 0x7C, 0xCE, 0xC7, 0xE3, 0x63, 0x01, 0x00, 0x3E, 0x7F, 0xE3, 0xE1, 0xE0, 0x70, 0x38, 0x18, // 52
    0x00, 0x00, 0x80, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x7E, 0xE7, 0xC3, 0xC1, 0xC1, 0xC3, 0xE7, 0x7E, // 53
    0x03, 0x07, 0x06, 0x06, 0x06, 0x0E, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFE, 0x1F, 0x03, // 54
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x0F, 0x3F, 0x60, 0x80, 0x60, 0x3F, 0x0F, 0x00, // 55
    0x80, 0xF0, 0xFC, 0x06, 0x01, 0x06, 0xFC, 0xF0, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, // 56
    0x3C, 0x7E, 0xE7, 0xC3, 0xC3, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF0, // 57
    0x00, 0x00, 0x70, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x0E, 0x0E, 0x00, 0x00 // 58
    
};

#endif
