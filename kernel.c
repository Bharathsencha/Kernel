// kernel.c - Basic kernel code
#include "kernel.h"

// Function to write a character to the screen via VGA text mode
void print_char(char c, int row, int col, char attr) {
    unsigned char *video_memory = (unsigned char *)0xB8000;
    int offset = (row * 80 + col) * 2;
    video_memory[offset] = c;
    video_memory[offset + 1] = attr;
}

// Kernel main entry
void kernel_main(void) {
    print_char('H', 0, 0, 0x0F); // White on black
    print_char('e', 0, 1, 0x0F);
    print_char('l', 0, 2, 0x0F);
    print_char('l', 0, 3, 0x0F);
    print_char('o', 0, 4, 0x0F);
}
