#include "screen.h"

unsigned char get_vga_attr(vga_color_t color) {
    return (color.background << 4) | (color.foreground);
}

void print_char(){
  
}
