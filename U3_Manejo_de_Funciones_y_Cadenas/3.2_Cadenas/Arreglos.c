/** Arreglos.c */
#include <stdio.h>
#include <stdint.h>
uint8_t a8[2] = {0x12,0x34};
uint16_t a16[2] = {0x1234,0x5678};
uint32_t a32[2] = {0x12345678,0x9abcdef0};
uint64_t a64[2] = {0x123456789abcdef0,0x123456789abcdef0};
char color[4] = {'R','O','J','O'};
void print_array_color();
void f();
int main(int argc,char *argv[])
{
    putchar('\n');
    putchar('\n');
    putchar('\n');
    putchar('\n');
    print_array_color();
    print_array_color();
    putchar('\n');
    f();
    f();
    return 0;
}
