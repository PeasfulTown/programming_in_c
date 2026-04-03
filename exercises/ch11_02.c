#include <stdio.h>

int main(void)
{
    unsigned int num = 0757u;

    num >>= 2;
    printf("%o\n", num); // logical right shift

    return 0;
}
