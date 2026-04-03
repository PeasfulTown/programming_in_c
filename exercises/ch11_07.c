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

int main(void)
{
    unsigned int x = 0xe90F;
    printf("%x\n", bitpat_get(x, 3, 3));
    return 0;
}
