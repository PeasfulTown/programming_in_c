#include <stdio.h>

float absoluteValue(float n);
float squareRoot(float n, float epsilon);

float absoluteValue(float n)
{
    if (n < 0)
        return -n;

    return n;
}

float squareRoot(float n, float epsilon)
{
    float guess = 1;

    while (absoluteValue(guess * guess - n) >= epsilon) {
        guess = (n / guess + guess) / 2.0;
    }

    return guess;
}

int main(void)
{
    printf("squareRoot(2.0, .00001) = %f\n", squareRoot(2.0, .00001));
    printf("squareRoot(144.0, 1) = %f\n", squareRoot(144.0, 1));
    printf("squareRoot(17.5, .001) = %f\n", squareRoot(17.5, .001));
}
