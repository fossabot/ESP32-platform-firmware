#include "include/driver_framebuffer.h"
const uint8_t pixelade6pt7bBitmaps[] = {
    0x00, 0xF8, 0xF0, 0x6F, 0xF6, 0x5D, 0x3C, 0x80, 0xD2, 0x4B, 0x2A, 0x52,
    0xC0, 0x6A, 0xA1, 0x95, 0x52, 0x5F, 0x80, 0x5D, 0x00, 0x80, 0xC0, 0x80,
    0x12, 0x48, 0xF6, 0xA0, 0xF0, 0xEA, 0x70, 0xE6, 0xBC, 0x90, 0xF8, 0xE0,
    0xDA, 0xA0, 0xE5, 0x20, 0xEA, 0xA0, 0xEC, 0xA0, 0xA0, 0xA0, 0x61, 0xFC,
    0x96, 0xCA, 0x7F, 0xA7, 0xFE, 0xD0, 0xFA, 0xE0, 0xE9, 0xF6, 0xE0, 0xFB,
    0xFA, 0xF6, 0xA0, 0xBE, 0xD0, 0xF0, 0x26, 0xF0, 0xBB, 0x50, 0xAB, 0x9F,
    0x99, 0xBF, 0xD0, 0xF6, 0xA0, 0xFA, 0x40, 0xF6, 0xA0, 0xFA, 0xD0, 0xE8,
    0xE0, 0xE9, 0x20, 0xB6, 0xF0, 0xB5, 0x80, 0x9B, 0x75, 0xCC, 0xAD, 0x20,
    0xEA, 0x70, 0xEA, 0xAB, 0x84, 0x21, 0xD5, 0x57, 0x00, 0xC0, 0xC0, 0xFC,
    0x9A, 0xE0, 0x64, 0x2E, 0xB0, 0x74, 0xEA, 0xF5, 0xA0, 0x9A, 0xD0, 0xF0,
    0xF8, 0xBB, 0x50, 0xF0, 0xF5, 0x6A, 0xD6, 0x80, 0x55, 0x00, 0xF7, 0x40,
    0xF5, 0x90, 0xE8, 0xDC, 0xF0, 0xB5, 0x80, 0xB5, 0x80, 0x8D, 0x54, 0xAA,
    0x80, 0xB5, 0xB0, 0xFC, 0xF0, 0xF0, 0xF0, 0x00};

const GFXglyph pixelade6pt7bGlyphs[] = {{0, 1, 1, 2, 0, 0},     // 0x20 ' '
                                        {1, 1, 5, 1, 0, -3},    // 0x21 '!'
                                        {2, 2, 2, 2, 0, -5},    // 0x22 '"'
                                        {3, 4, 4, 4, 0, -3},    // 0x23 '#'
                                        {5, 3, 6, 3, 0, -4},    // 0x24 '$'
                                        {8, 4, 4, 4, 0, -3},    // 0x25 '%'
                                        {10, 4, 4, 4, 0, -3},   // 0x26 '&'
                                        {12, 1, 2, 1, 0, -3},   // 0x27 '''
                                        {13, 2, 8, 2, 0, -5},   // 0x28 '('
                                        {15, 2, 8, 2, 0, -5},   // 0x29 ')'
                                        {17, 3, 3, 3, 0, -5},   // 0x2A '*'
                                        {19, 3, 3, 3, 0, -2},   // 0x2B '+'
                                        {21, 1, 2, 1, 0, 0},    // 0x2C ','
                                        {22, 2, 1, 3, 0, -2},   // 0x2D '-'
                                        {23, 1, 1, 1, 0, 0},    // 0x2E '.'
                                        {24, 4, 4, 4, 0, -3},   // 0x2F '/'
                                        {26, 3, 4, 3, 0, -3},   // 0x30 '0'
                                        {28, 1, 4, 1, 0, -3},   // 0x31 '1'
                                        {29, 3, 4, 3, 0, -3},   // 0x32 '2'
                                        {31, 2, 4, 2, 0, -3},   // 0x33 '3'
                                        {32, 3, 4, 3, 0, -3},   // 0x34 '4'
                                        {34, 3, 4, 3, 0, -3},   // 0x35 '5'
                                        {36, 3, 4, 3, 0, -3},   // 0x36 '6'
                                        {38, 3, 4, 3, 0, -3},   // 0x37 '7'
                                        {40, 3, 4, 3, 0, -3},   // 0x38 '8'
                                        {42, 3, 4, 3, 0, -3},   // 0x39 '9'
                                        {44, 1, 3, 1, 0, -2},   // 0x3A ':'
                                        {45, 1, 4, 1, 0, -2},   // 0x3B ';'
                                        {46, 2, 4, 3, 0, -3},   // 0x3C '<'
                                        {47, 3, 2, 3, 0, -2},   // 0x3D '='
                                        {48, 2, 4, 3, 0, -3},   // 0x3E '>'
                                        {49, 2, 4, 2, 0, -3},   // 0x3F '?'
                                        {50, 4, 4, 4, 0, -2},   // 0x40 '@'
                                        {52, 3, 4, 3, 0, -3},   // 0x41 'A'
                                        {54, 3, 4, 3, 0, -3},   // 0x42 'B'
                                        {56, 2, 4, 3, 0, -3},   // 0x43 'C'
                                        {57, 3, 4, 3, 0, -3},   // 0x44 'D'
                                        {59, 2, 4, 3, 0, -3},   // 0x45 'E'
                                        {60, 2, 4, 3, 0, -3},   // 0x46 'F'
                                        {61, 3, 4, 3, 0, -3},   // 0x47 'G'
                                        {63, 3, 4, 3, 0, -3},   // 0x48 'H'
                                        {65, 1, 4, 2, 0, -3},   // 0x49 'I'
                                        {66, 3, 4, 3, 0, -3},   // 0x4A 'J'
                                        {68, 3, 4, 3, 0, -3},   // 0x4B 'K'
                                        {70, 2, 4, 3, 0, -3},   // 0x4C 'L'
                                        {71, 4, 4, 4, 0, -3},   // 0x4D 'M'
                                        {73, 3, 4, 3, 0, -3},   // 0x4E 'N'
                                        {75, 3, 4, 3, 0, -3},   // 0x4F 'O'
                                        {77, 3, 4, 3, 0, -3},   // 0x50 'P'
                                        {79, 3, 5, 3, 0, -3},   // 0x51 'Q'
                                        {81, 3, 4, 3, 0, -3},   // 0x52 'R'
                                        {83, 3, 4, 3, 0, -3},   // 0x53 'S'
                                        {85, 3, 4, 3, 0, -3},   // 0x54 'T'
                                        {87, 3, 4, 3, 0, -3},   // 0x55 'U'
                                        {89, 3, 4, 3, 0, -3},   // 0x56 'V'
                                        {91, 4, 4, 4, 0, -3},   // 0x57 'W'
                                        {93, 2, 4, 3, 0, -3},   // 0x58 'X'
                                        {94, 3, 4, 3, 0, -3},   // 0x59 'Y'
                                        {96, 3, 4, 3, 0, -3},   // 0x5A 'Z'
                                        {98, 2, 8, 2, 0, -5},   // 0x5B '['
                                        {100, 4, 4, 4, 0, -3},  // 0x5C '\'
                                        {102, 2, 8, 2, 0, -5},  // 0x5D ']'
                                        {104, 1, 1, 2, 0, 0},   // 0x5E '^'
                                        {105, 2, 1, 3, 0, 0},   // 0x5F '_'
                                        {106, 1, 2, 2, 0, -4},  // 0x60 '`'
                                        {107, 2, 3, 3, 0, -2},  // 0x61 'a'
                                        {108, 3, 4, 3, 0, -3},  // 0x62 'b'
                                        {110, 2, 3, 3, 0, -2},  // 0x63 'c'
                                        {111, 3, 4, 3, 0, -3},  // 0x64 'd'
                                        {113, 2, 3, 3, 0, -2},  // 0x65 'e'
                                        {114, 2, 4, 2, 0, -3},  // 0x66 'f'
                                        {115, 3, 4, 3, 0, -2},  // 0x67 'g'
                                        {117, 3, 4, 3, 0, -3},  // 0x68 'h'
                                        {119, 1, 4, 1, 0, -3},  // 0x69 'i'
                                        {120, 1, 5, 1, 0, -3},  // 0x6A 'j'
                                        {121, 3, 4, 3, 0, -3},  // 0x6B 'k'
                                        {123, 1, 4, 1, 0, -3},  // 0x6C 'l'
                                        {124, 5, 3, 5, 0, -2},  // 0x6D 'm'
                                        {126, 3, 3, 3, 0, -2},  // 0x6E 'n'
                                        {128, 3, 3, 3, 0, -2},  // 0x6F 'o'
                                        {130, 3, 4, 3, 0, -2},  // 0x70 'p'
                                        {132, 3, 4, 3, 0, -2},  // 0x71 'q'
                                        {134, 2, 3, 3, 0, -2},  // 0x72 'r'
                                        {135, 2, 3, 3, 0, -2},  // 0x73 's'
                                        {136, 1, 4, 2, 0, -3},  // 0x74 't'
                                        {137, 3, 3, 3, 0, -2},  // 0x75 'u'
                                        {139, 3, 3, 3, 0, -2},  // 0x76 'v'
                                        {141, 5, 3, 5, 0, -2},  // 0x77 'w'
                                        {143, 3, 3, 3, 0, -2},  // 0x78 'x'
                                        {145, 3, 4, 3, 0, -2},  // 0x79 'y'
                                        {147, 2, 3, 3, 0, -2},  // 0x7A 'z'
                                        {148, 1, 4, 2, 0, -3},  // 0x7B '{'
                                        {149, 1, 4, 1, 0, -3},  // 0x7C '|'
                                        {150, 1, 4, 2, 0, -3},  // 0x7D '}'
                                        {151, 1, 1, 3, 0, 0}};  // 0x7E '~'

const GFXfont pixelade6pt7b = {(uint8_t *)pixelade6pt7bBitmaps,
                               (GFXglyph *)pixelade6pt7bGlyphs, 0x20, 0x7E,
                               6};  // B

// Approx. 824 bytes
