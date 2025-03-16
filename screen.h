#ifndef SCREEN_H
#define SCREEN_H
define VGA_MEMORY       (unsigned char *)0xB8000
#define VGA_WIDTH        80
#define VGA_HEIGHT       25

//vga colors
#define COLOR_BLACK           0
#define COLOR_BLUE            1
#define COLOR_GREEN           2
#define COLOR_CYAN            3
#define COLOR_RED             4
#define COLOR_MAGENTA         5
#define COLOR_BROWN           6
#define COLOR_LIGHT_GREY      7
#define COLOR_DARK_GREY       8
#define COLOR_LIGHT_BLUE      9
#define COLOR_LIGHT_GREEN     10
#define COLOR_LIGHT_CYAN      11
#define COLOR_LIGHT_RED       12
#define COLOR_LIGHT_MAGENTA   13
#define COLOR_LIGHT_BROWN     14
#define COLOR_WHITE           15

typedef struct {
    unsigned char foreground;
    unsigned char background;
} vga_color_t;

unsigned char get_vga_attr(vga_color_t color);
void print_char(char c, int row, int col, vga_color_t color);
void print_string(const char* str, int row, int col, vga_color_t color);
void clear_screen(vga_color_t color);


#endif

