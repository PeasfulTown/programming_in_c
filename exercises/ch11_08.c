#include <stdio.h>

unsigned int bitpat_get(unsigned int x, unsigned int start, unsigned int count)
{
    int bitcount;
    unsigned int result;
    unsigned int mask = (1U << count) - 1;

    for (bitcount = 0; (x >> bitcount) > 0; ++bitcount)
        continue;

    mask = mask << bitcount - count - start;

    result = x & mask;
    return result >> bitcount - count -start;
}

unsigned int bitpat_set(const unsigned int *x, unsigned int o, unsigned int index, unsigned int n)
{
    unsigned int bits = bitpat_get(*x, index, n);
    return o | bits;
}

int main(void)
{
    unsigned int x = 0xe90fu;
    unsigned int o = 0x55u;

    printf("%x\n", bitpat_set(&x, o, 0, 4));
    printf("%x\n", bitpat_set(&x, o, 0, 8));
    return 0;
}
