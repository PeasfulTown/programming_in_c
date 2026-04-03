#include <stdio.h>
#include <stdbool.h>

unsigned int int_size()
{
    unsigned int n = ~0;
    unsigned int count;
    while (n > 0) {
        n <<= 1;
        ++count;
    }
    return count;
}

bool bit_test(unsigned int w, int n)
{
    unsigned int mask = 1 << int_size() - n - 1;

    if (w & mask)
        return 1;

    return 0;
}

unsigned int bit_set(unsigned int w, int n)
{
    unsigned int result;
    unsigned int mask = 1 << int_size() - n - 1;
    result = w | mask;
    return result;
}

int main(void)
{
    unsigned int w = 0xf8000000u;
    printf("test = %i\n", bit_test(w, 5));
    printf("set bit = %x\n", bit_set(w, 11));
    return 0;
}
