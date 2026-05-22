#include <stdio.h>

#define SHIFT(N, P) ((P) > 0 ? (N) >> (P) : (N) << -(P))

int main(void)
{
    printf("shift(0xffeb, 2) = %x\n", SHIFT(0xffeb, 2));
    printf("shift(0x1111, 1) = %x\n", SHIFT(0x1111, 1));
    return 0;
}
