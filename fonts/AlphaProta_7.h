/*
 * Font Name: AlphaProta_7
 * Font Size: 7
 * Font Width: 5 (maximum width of any character)
 * Font Height: 8
 * Character Set: Custom (96 characters)
 * Character Spacing: 1 pixels
 * Data Size: 870 bytes
 * Source Font: AlphaProta.ttf
 * Bytes per Column: 1
 *
 * Font Data Format:
 * - First 5 bytes: max width, height, char count MSB, char count LSB, spacing
 * - Character Table: N bytes listing the codes of included characters
 * - Jump Table: 4 bytes per character
 *   - byte 0-1: MSB & LSB of offset in data array
 *   - byte 2: Size in bytes of this character's bitmap
 *   - byte 3: Width of character in pixels
 * - Font Data: Bitmap data for all characters
 *
 * To render character 'X':
 * 1. Get font info from header:
 *    - Get max width, height from bytes 0-1
 *    - Get character count from (byte 2 << 8) | byte 3
 *    - Get recommended spacing from byte 4
 * 2. Search for character code of 'X' in the character table
 *    (bytes 5 to 5+N-1)
 * 3. If found at position i, calculate jump table entry position:
 *    jump_entry = (5 + N) + (i * 4)
 * 4. Extract from jump table entry:
 *    - offset = (jump_table[0] << 8) | jump_table[1]
 *    - size = jump_table[2]
 *    - width = jump_table[3]
 * 5. Bytes per column: 1
 * 6. Render bitmap columns from the data section
 * 7. Advance cursor position by: character_width + font_spacing
 *
 * This file was automatically generated by font_converter on 2025-03-04
 * Created by Luc LEBOSSE
 *
 * This font data is licensed under the GNU LGPL v3 License.
 */

#ifndef ALPHAPROTA_7_H
#define ALPHAPROTA_7_H

const char AlphaProta_7[] PROGMEM = {
	0x05, // Width: 5 (maximum)
	0x08, // Height: 8
	0x00, // Number of Chars MSB
	0x60, // Number of Chars LSB: 96

	0x01, // Character Spacing: 1 pixels

	// Character Table: List of character codes in this font
	0x20, // 0: ' '
	0x21, // 1: '!'
	0x22, // 2: '"'
	0x23, // 3: '#'
	0x24, // 4: '$'
	0x25, // 5: '%'
	0x26, // 6: '&'
	0x27, // 7: 0x27
	0x28, // 8: '('
	0x29, // 9: ')'
	0x2A, // 10: '*'
	0x2B, // 11: '+'
	0x2C, // 12: ','
	0x2D, // 13: '-'
	0x2E, // 14: '.'
	0x2F, // 15: '/'
	0x30, // 16: '0'
	0x31, // 17: '1'
	0x32, // 18: '2'
	0x33, // 19: '3'
	0x34, // 20: '4'
	0x35, // 21: '5'
	0x36, // 22: '6'
	0x37, // 23: '7'
	0x38, // 24: '8'
	0x39, // 25: '9'
	0x3A, // 26: ':'
	0x3B, // 27: ';'
	0x3C, // 28: '<'
	0x3D, // 29: '='
	0x3E, // 30: '>'
	0x3F, // 31: '?'
	0x40, // 32: '@'
	0x41, // 33: 'A'
	0x42, // 34: 'B'
	0x43, // 35: 'C'
	0x44, // 36: 'D'
	0x45, // 37: 'E'
	0x46, // 38: 'F'
	0x47, // 39: 'G'
	0x48, // 40: 'H'
	0x49, // 41: 'I'
	0x4A, // 42: 'J'
	0x4B, // 43: 'K'
	0x4C, // 44: 'L'
	0x4D, // 45: 'M'
	0x4E, // 46: 'N'
	0x4F, // 47: 'O'
	0x50, // 48: 'P'
	0x51, // 49: 'Q'
	0x52, // 50: 'R'
	0x53, // 51: 'S'
	0x54, // 52: 'T'
	0x55, // 53: 'U'
	0x56, // 54: 'V'
	0x57, // 55: 'W'
	0x58, // 56: 'X'
	0x59, // 57: 'Y'
	0x5A, // 58: 'Z'
	0x5B, // 59: '['
	0x5C, // 60: '\'
	0x5D, // 61: ']'
	0x5E, // 62: '^'
	0x5F, // 63: '_'
	0x60, // 64: '`'
	0x61, // 65: 'a'
	0x62, // 66: 'b'
	0x63, // 67: 'c'
	0x64, // 68: 'd'
	0x65, // 69: 'e'
	0x66, // 70: 'f'
	0x67, // 71: 'g'
	0x68, // 72: 'h'
	0x69, // 73: 'i'
	0x6A, // 74: 'j'
	0x6B, // 75: 'k'
	0x6C, // 76: 'l'
	0x6D, // 77: 'm'
	0x6E, // 78: 'n'
	0x6F, // 79: 'o'
	0x70, // 80: 'p'
	0x71, // 81: 'q'
	0x72, // 82: 'r'
	0x73, // 83: 's'
	0x74, // 84: 't'
	0x75, // 85: 'u'
	0x76, // 86: 'v'
	0x77, // 87: 'w'
	0x78, // 88: 'x'
	0x79, // 89: 'y'
	0x7A, // 90: 'z'
	0x7B, // 91: '{'
	0x7C, // 92: '|'
	0x7D, // 93: '}'
	0x7E, // 94: '~'
	0x7F, // 95: 0x7F

	// Jump Table: Format is [MSB, LSB, size, width]
	0x00, 0x00, 0x00, 0x03,  // 32:0 ' ' width:3px
	0x00, 0x00, 0x04, 0x05,  // 33:0 '!' width:5px
	0x00, 0x04, 0x02, 0x03,  // 34:4 '"' width:3px
	0x00, 0x06, 0x04, 0x05,  // 35:6 '#' width:5px
	0x00, 0x0A, 0x04, 0x05,  // 36:10 '$' width:5px
	0x00, 0x0E, 0x04, 0x05,  // 37:14 '%' width:5px
	0x00, 0x12, 0x04, 0x05,  // 38:18 '&' width:5px
	0x00, 0x16, 0x02, 0x03,  // 39:22 ''' width:3px
	0x00, 0x18, 0x05, 0x05,  // 40:24 '(' width:5px
	0x00, 0x1D, 0x04, 0x05,  // 41:29 ')' width:5px
	0x00, 0x21, 0x02, 0x03,  // 42:33 '*' width:3px
	0x00, 0x23, 0x05, 0x05,  // 43:35 '+' width:5px
	0x00, 0x28, 0x02, 0x03,  // 44:40 ',' width:3px
	0x00, 0x2A, 0x05, 0x05,  // 45:42 '-' width:5px
	0x00, 0x2F, 0x02, 0x03,  // 46:47 '.' width:3px
	0x00, 0x31, 0x05, 0x05,  // 47:49 '/' width:5px
	0x00, 0x36, 0x04, 0x04,  // 48:54 '0' width:4px
	0x00, 0x3A, 0x01, 0x02,  // 49:58 '1' width:2px
	0x00, 0x3B, 0x04, 0x04,  // 50:59 '2' width:4px
	0x00, 0x3F, 0x04, 0x05,  // 51:63 '3' width:5px
	0x00, 0x43, 0x04, 0x04,  // 52:67 '4' width:4px
	0x00, 0x47, 0x04, 0x04,  // 53:71 '5' width:4px
	0x00, 0x4B, 0x04, 0x04,  // 54:75 '6' width:4px
	0x00, 0x4F, 0x04, 0x05,  // 55:79 '7' width:5px
	0x00, 0x53, 0x04, 0x04,  // 56:83 '8' width:4px
	0x00, 0x57, 0x04, 0x04,  // 57:87 '9' width:4px
	0x00, 0x5B, 0x02, 0x03,  // 58:91 ':' width:3px
	0x00, 0x5D, 0x02, 0x03,  // 59:93 ';' width:3px
	0x00, 0x5F, 0x04, 0x05,  // 60:95 '<' width:5px
	0x00, 0x63, 0x05, 0x05,  // 61:99 '=' width:5px
	0x00, 0x68, 0x04, 0x05,  // 62:104 '>' width:5px
	0x00, 0x6C, 0x04, 0x05,  // 63:108 '?' width:5px
	0x00, 0x70, 0x04, 0x05,  // 64:112 '@' width:5px
	0x00, 0x74, 0x04, 0x04,  // 65:116 'A' width:4px
	0x00, 0x78, 0x04, 0x04,  // 66:120 'B' width:4px
	0x00, 0x7C, 0x05, 0x05,  // 67:124 'C' width:5px
	0x00, 0x81, 0x04, 0x04,  // 68:129 'D' width:4px
	0x00, 0x85, 0x05, 0x05,  // 69:133 'E' width:5px
	0x00, 0x8A, 0x05, 0x05,  // 70:138 'F' width:5px
	0x00, 0x8F, 0x04, 0x04,  // 71:143 'G' width:4px
	0x00, 0x93, 0x04, 0x04,  // 72:147 'H' width:4px
	0x00, 0x97, 0x05, 0x05,  // 73:151 'I' width:5px
	0x00, 0x9C, 0x04, 0x04,  // 74:156 'J' width:4px
	0x00, 0xA0, 0x04, 0x05,  // 75:160 'K' width:5px
	0x00, 0xA4, 0x05, 0x05,  // 76:164 'L' width:5px
	0x00, 0xA9, 0x04, 0x04,  // 77:169 'M' width:4px
	0x00, 0xAD, 0x04, 0x04,  // 78:173 'N' width:4px
	0x00, 0xB1, 0x04, 0x04,  // 79:177 'O' width:4px
	0x00, 0xB5, 0x04, 0x04,  // 80:181 'P' width:4px
	0x00, 0xB9, 0x04, 0x04,  // 81:185 'Q' width:4px
	0x00, 0xBD, 0x04, 0x04,  // 82:189 'R' width:4px
	0x00, 0xC1, 0x04, 0x04,  // 83:193 'S' width:4px
	0x00, 0xC5, 0x05, 0x05,  // 84:197 'T' width:5px
	0x00, 0xCA, 0x04, 0x04,  // 85:202 'U' width:4px
	0x00, 0xCE, 0x04, 0x04,  // 86:206 'V' width:4px
	0x00, 0xD2, 0x04, 0x04,  // 87:210 'W' width:4px
	0x00, 0xD6, 0x05, 0x05,  // 88:214 'X' width:5px
	0x00, 0xDB, 0x05, 0x05,  // 89:219 'Y' width:5px
	0x00, 0xE0, 0x04, 0x05,  // 90:224 'Z' width:5px
	0x00, 0xE4, 0x05, 0x05,  // 91:228 '[' width:5px
	0x00, 0xE9, 0x05, 0x05,  // 92:233 'backslash' width:5px
	0x00, 0xEE, 0x04, 0x05,  // 93:238 ']' width:5px
	0x00, 0xF2, 0x04, 0x05,  // 94:242 '^' width:5px
	0x00, 0xF6, 0x05, 0x05,  // 95:246 '_' width:5px
	0x00, 0xFB, 0x04, 0x05,  // 96:251 '`' width:5px
	0x00, 0xFF, 0x04, 0x04,  // 97:255 'a' width:4px
	0x01, 0x03, 0x04, 0x04,  // 98:259 'b' width:4px
	0x01, 0x07, 0x05, 0x05,  // 99:263 'c' width:5px
	0x01, 0x0C, 0x04, 0x04,  // 100:268 'd' width:4px
	0x01, 0x10, 0x05, 0x05,  // 101:272 'e' width:5px
	0x01, 0x15, 0x05, 0x05,  // 102:277 'f' width:5px
	0x01, 0x1A, 0x04, 0x04,  // 103:282 'g' width:4px
	0x01, 0x1E, 0x04, 0x04,  // 104:286 'h' width:4px
	0x01, 0x22, 0x05, 0x05,  // 105:290 'i' width:5px
	0x01, 0x27, 0x04, 0x04,  // 106:295 'j' width:4px
	0x01, 0x2B, 0x04, 0x05,  // 107:299 'k' width:5px
	0x01, 0x2F, 0x05, 0x05,  // 108:303 'l' width:5px
	0x01, 0x34, 0x04, 0x04,  // 109:308 'm' width:4px
	0x01, 0x38, 0x04, 0x04,  // 110:312 'n' width:4px
	0x01, 0x3C, 0x04, 0x04,  // 111:316 'o' width:4px
	0x01, 0x40, 0x04, 0x04,  // 112:320 'p' width:4px
	0x01, 0x44, 0x04, 0x04,  // 113:324 'q' width:4px
	0x01, 0x48, 0x04, 0x04,  // 114:328 'r' width:4px
	0x01, 0x4C, 0x04, 0x04,  // 115:332 's' width:4px
	0x01, 0x50, 0x05, 0x05,  // 116:336 't' width:5px
	0x01, 0x55, 0x04, 0x04,  // 117:341 'u' width:4px
	0x01, 0x59, 0x04, 0x04,  // 118:345 'v' width:4px
	0x01, 0x5D, 0x04, 0x04,  // 119:349 'w' width:4px
	0x01, 0x61, 0x05, 0x05,  // 120:353 'x' width:5px
	0x01, 0x66, 0x05, 0x05,  // 121:358 'y' width:5px
	0x01, 0x6B, 0x04, 0x05,  // 122:363 'z' width:5px
	0x01, 0x6F, 0x05, 0x05,  // 123:367 '{' width:5px
	0x01, 0x74, 0x01, 0x05,  // 124:372 '|' width:5px
	0x01, 0x75, 0x04, 0x05,  // 125:373 '}' width:5px
	0x01, 0x79, 0x04, 0x05,  // 126:377 '~' width:5px
	0x01, 0x7D, 0x04, 0x05,  // 127:381 width:5px

	// Font Data:
	0x3E, 0x3E, 0x3E, 0x3E, 0x02, 0x00, 0x3F, 0x3F, 0x3F, 0x3F,
	0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
	0x3F, 0x3F, 0x02, 0x00, 0x3E, 0x22, 0x22, 0x22, 0x00, 0x22,
	0x22, 0x22, 0x3E, 0x02, 0x00, 0x08, 0x08, 0x3E, 0x08, 0x08,
	0x20, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x20, 0x00, 0x20,
	0x30, 0x1C, 0x0E, 0x02, 0x3E, 0x22, 0x22, 0x3E, 0x3E, 0x3A,
	0x2A, 0x2A, 0x2E, 0x2A, 0x2A, 0x2A, 0x3E, 0x0E, 0x08, 0x08,
	0x3E, 0x2E, 0x2A, 0x2A, 0x3A, 0x3E, 0x2A, 0x2A, 0x3A, 0x32,
	0x1A, 0x0E, 0x02, 0x3E, 0x2A, 0x2A, 0x3E, 0x2E, 0x2A, 0x2A,
	0x3E, 0x28, 0x00, 0x28, 0x00, 0x3F, 0x3F, 0x3F, 0x3F, 0x14,
	0x14, 0x14, 0x14, 0x14, 0x3F, 0x3F, 0x3F, 0x3F, 0x3E, 0x3E,
	0x3E, 0x3E, 0x3F, 0x3F, 0x3F, 0x3F, 0x3E, 0x0A, 0x0A, 0x3E,
	0x3E, 0x2A, 0x3E, 0x3E, 0x3E, 0x22, 0x22, 0x22, 0x00, 0x3E,
	0x22, 0x36, 0x1C, 0x3E, 0x2A, 0x2A, 0x2A, 0x00, 0x3E, 0x0A,
	0x0A, 0x0A, 0x00, 0x3E, 0x22, 0x2A, 0x3A, 0x3E, 0x08, 0x08,
	0x3E, 0x22, 0x22, 0x3E, 0x22, 0x22, 0x30, 0x20, 0x20, 0x3E,
	0x3E, 0x08, 0x1C, 0x36, 0x3E, 0x20, 0x20, 0x20, 0x00, 0x3E,
	0x3C, 0x3C, 0x3E, 0x3E, 0x0E, 0x38, 0x3E, 0x3E, 0x22, 0x22,
	0x3E, 0x3E, 0x0A, 0x0A, 0x0E, 0x3E, 0x22, 0x32, 0x3E, 0x3E,
	0x0A, 0x3A, 0x2E, 0x2E, 0x2A, 0x2A, 0x3A, 0x02, 0x02, 0x3E,
	0x02, 0x02, 0x3E, 0x20, 0x20, 0x3E, 0x1E, 0x30, 0x30, 0x1E,
	0x3E, 0x1E, 0x1E, 0x3E, 0x22, 0x36, 0x1C, 0x3E, 0x22, 0x02,
	0x06, 0x3C, 0x06, 0x02, 0x32, 0x3A, 0x2E, 0x22, 0x3E, 0x22,
	0x22, 0x22, 0x00, 0x02, 0x06, 0x1C, 0x38, 0x20, 0x22, 0x22,
	0x22, 0x3E, 0x3F, 0x3F, 0x3F, 0x3F, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x3F, 0x3F, 0x3F, 0x3F, 0x3E, 0x0A, 0x0A, 0x3E, 0x3E,
	0x2A, 0x3E, 0x3E, 0x3E, 0x22, 0x22, 0x22, 0x00, 0x3E, 0x22,
	0x36, 0x1C, 0x3E, 0x2A, 0x2A, 0x2A, 0x00, 0x3E, 0x0A, 0x0A,
	0x0A, 0x00, 0x3E, 0x22, 0x2A, 0x3A, 0x3E, 0x08, 0x08, 0x3E,
	0x22, 0x22, 0x3E, 0x22, 0x22, 0x30, 0x20, 0x20, 0x3E, 0x3E,
	0x08, 0x1C, 0x36, 0x3E, 0x20, 0x20, 0x20, 0x00, 0x3E, 0x3C,
	0x3C, 0x3E, 0x3E, 0x0E, 0x38, 0x3E, 0x3E, 0x22, 0x22, 0x3E,
	0x3E, 0x0A, 0x0A, 0x0E, 0x3E, 0x22, 0x32, 0x3E, 0x3E, 0x0A,
	0x3A, 0x2E, 0x2E, 0x2A, 0x2A, 0x3A, 0x02, 0x02, 0x3E, 0x02,
	0x02, 0x3E, 0x20, 0x20, 0x3E, 0x1E, 0x30, 0x30, 0x1E, 0x3E,
	0x1E, 0x1E, 0x3E, 0x22, 0x36, 0x1C, 0x3E, 0x22, 0x02, 0x06,
	0x3C, 0x06, 0x02, 0x32, 0x3A, 0x2E, 0x22, 0x3E, 0x22, 0x22,
	0x22, 0x00, 0x3E, 0x22, 0x22, 0x22, 0x3E, 0x3F, 0x3F, 0x3F,
	0x3F, 0x3F, 0x3F, 0x3F, 0x3F
};

#endif // ALPHAPROTA_7_H
