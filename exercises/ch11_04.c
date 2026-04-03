#include <stdio.h>

unsigned short int_size()
{
    unsigned int n = ~0;
    unsigned short size = 0;

    while (n > 0) {
        n <<= 1;
        ++size;
    }

    return size;
}

unsigned int rotate(unsigned int num, int p)
{
    unsigned short size = int_size();
    unsigned int bits, result;

    if (p > 0)
        p = p % size;
    else
        p = -(-p % 32);

    if (p == 0)
        result = num;
    else if (p > 0) {
        bits = num >> size - p;
        result = (num << p) | bits;
    } else {
        p = -p;
        bits = num << size - p;
        result = (num >> p) | bits;
    }

    return result;
}

int main(void)
{
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
    unsigned int rotate(unsigned int value, int n);

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44));

    return 0;
}
