#include <stdio.h>

long int x_to_the_n(int x, int n);

int main(void)
{
    printf("%i to the power of %i = %li\n", 2, 4, x_to_the_n(2, 4));
    printf("%i to the power of %i = %li\n", 3, 3, x_to_the_n(3, 3));
}

long int x_to_the_n(int x, int n)
{
    int result = x, i;
    for (i = 1; i < n; ++i)
        result *= x;

    return result;
}
