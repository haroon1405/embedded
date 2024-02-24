// WAP to SET, GET, CLEAR, TOGGLE bit of a given register.

#include <stdio.h>

int main()
{
    int reg = 0xFE001010;
    int set = reg | 0x01;
    int clear = reg & ~(0x10);
    int get = (reg & 0xFF000000) >> 24;
    int toggle = reg ^ (0x11);
    printf("%X %X %X %X %X", reg, set, clear, get, toggle);
    return 0;
}
