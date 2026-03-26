#include <stdio.h>

double absoluteValue(double x)
{
    if (x < 0)
        x = -x;
    return (x);
}

double squareRoot(double x)
{
    const double epsilon = 1e-9;
    double guess = 1.0;

    while (absoluteValue(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2;

    return guess;
}

int main(void)
{
    printf("squareRoot(2.0) = %lf\n", squareRoot(2.0));
    printf("squareRoot(144.0) = %lf\n", squareRoot(144.0));
    printf("squareRoot(17.5) = %lf\n", squareRoot(17.5));

    return 0;
}

