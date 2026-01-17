#include <stdio.h>

// Write a program to evaluate the polynomial
// 3x^3 - 5x^2 + 6
int main(void)
{
    float x = 2.55;
    float result = 3 * x * x * x - 5 * x * x + 6;

    printf("3x^3 - 5x^2 + 6 = %f\n", result);

    return 0;
}
