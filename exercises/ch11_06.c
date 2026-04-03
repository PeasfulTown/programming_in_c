// TODO: revise
#include <stdio.h>

int bitpat_search(unsigned int source, int pattern, int n)
{
    int i, bitcount;
    unsigned int mask = (1u << n) - 1;
    pattern &= mask;

    for (bitcount = 0; (source >> bitcount) > 0; ++bitcount)
        continue;

    for (i = 0; i <= bitcount - n; ++i) {
        if (((source >> (bitcount - n - i)) & mask) == pattern)
            return i;

    }

    return -1;
}

int main(void)
{
    unsigned int source = 0xe1f4;
    int pattern = 0x5;
    printf("%i\n", bitpat_search(source, pattern, 3));
    return 0;
}
