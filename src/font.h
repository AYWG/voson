#ifndef _FONT_H
#define _FONT_H

// This structure describes a single character's display information
typedef struct
{
    const unsigned char width_bits; // width, in bits (or pixels), of the character
    const unsigned short offset;   // offset of the character's bitmap, in bytes, into the the FONT_INFO's data array

} FONT_CHAR_INFO;

// Describes a single font
typedef struct
{
    const unsigned char height_pages;      // height, in pages (8 pixels), of the font's characters
    const unsigned char start_char;        // the first character in the font (e.g. in char_info and data)
    const unsigned char end_char;          // the last character in the font
    const unsigned char space_pixels;      // number of pixels that a space character takes up
    const FONT_CHAR_INFO *char_info; // pointer to array of char information
    const unsigned char *char_data;             // pointer to generated array of character visual representation
} FONT_INFO;

#endif