/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   3000
#define CUSTOM_BOOTSCREEN_BMPWIDTH  122 
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 21

const unsigned char custom_start_bmp[336] PROGMEM = {
  0x0f, 0xff, 0xf0, 0x7e, 0x1f, 0xff, 0xf3, 0xf3, 0xff, 0xfc, 0x1f, 0xff, 0xe1, 0xff, 0xff, 0x00, 
  0x1f, 0xff, 0xf8, 0xfe, 0x3f, 0xff, 0xf7, 0xf7, 0xff, 0xfe, 0x3f, 0xff, 0xf1, 0xff, 0xff, 0x80, 
  0x1f, 0xff, 0xfc, 0xfc, 0x7f, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0x3f, 0xff, 0xf9, 0xff, 0xff, 0xc0, 
  0x1f, 0xff, 0xfc, 0xfc, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0x3f, 0xff, 0xf9, 0xff, 0xff, 0xc0, 
  0x1f, 0xff, 0xfc, 0xfc, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0x3f, 0xff, 0xf9, 0xff, 0xff, 0xc0, 
  0x1f, 0xff, 0xfc, 0xfc, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0x3f, 0xff, 0xf9, 0xff, 0xff, 0xc0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3f, 0xff, 0xf9, 0xf9, 0xf8, 0x7f, 0xcf, 0xcf, 0xc0, 0x7e, 0x00, 0xff, 0xf3, 0xf0, 0x1f, 0x80, 
  0x3f, 0xff, 0xf9, 0xf9, 0xf8, 0x7f, 0xcf, 0xcf, 0xc0, 0x7e, 0x00, 0xff, 0xf3, 0xf0, 0x1f, 0x80, 
  0x3f, 0xff, 0xf1, 0xf9, 0xf8, 0x7f, 0xcf, 0xcf, 0xc0, 0x7e, 0x00, 0xff, 0xe3, 0xf0, 0x1f, 0x80, 
  0x3f, 0xff, 0xf1, 0xf9, 0xf8, 0x7f, 0xcf, 0xcf, 0xc0, 0x7e, 0x00, 0xff, 0xe3, 0xf0, 0x3f, 0x80, 
  0x7f, 0xff, 0xfb, 0xfb, 0xf8, 0x7f, 0xdf, 0xdf, 0xc0, 0xfe, 0x01, 0xff, 0xf7, 0xf0, 0x3f, 0x80, 
  0x7f, 0x03, 0xfb, 0xfb, 0xf8, 0x1f, 0xdf, 0xdf, 0xc0, 0xfe, 0x00, 0x07, 0xe7, 0xe0, 0x3f, 0x00, 
  0x7e, 0x03, 0xf3, 0xf3, 0xf8, 0x1f, 0x9f, 0x9f, 0xc0, 0xfc, 0x00, 0x07, 0xe7, 0xf0, 0x3f, 0x00, 
  0x7e, 0x03, 0xf3, 0xf3, 0xff, 0xff, 0x9f, 0x9f, 0xff, 0xfc, 0xff, 0xff, 0xe7, 0xff, 0xff, 0x00, 
  0x7e, 0x03, 0xf3, 0xf3, 0xff, 0xff, 0x9f, 0x9f, 0xff, 0xfc, 0xff, 0xff, 0xe7, 0xff, 0xff, 0x00, 
  0x7e, 0x03, 0xf3, 0xf3, 0xff, 0xff, 0x9f, 0x9f, 0xff, 0xfc, 0xff, 0xff, 0xe7, 0xff, 0xfe, 0x00, 
  0xfe, 0x07, 0xf7, 0xf3, 0xff, 0xff, 0x3f, 0xbf, 0xff, 0xf9, 0xff, 0xff, 0xcf, 0xff, 0xfe, 0x00, 
  0xfc, 0x07, 0xe7, 0xe1, 0xff, 0xfe, 0x3f, 0x3f, 0xff, 0xf1, 0xff, 0xff, 0x8f, 0xff, 0xfc, 0x00, 
  0xfc, 0x07, 0xe7, 0xe0, 0xff, 0xf8, 0x3f, 0x3f, 0xff, 0xc1, 0xff, 0xfe, 0x0f, 0xff, 0xf0, 0x00, 
};
