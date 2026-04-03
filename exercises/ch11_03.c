#include <stdio.h>

int int_size()
{
    unsigned int n = ~0;
    int count = 0;

    while (n > 0) {
        n <<= 1;
        ++count;
    }

    return count;
}

int main(void)
{
    printf("Int size = %i\n", int_size());

    return 0;
}
