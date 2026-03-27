#include <stdio.h>
#include <stdbool.h>

float squareRoot(float x);
bool prime(int n);
float absoluteValue(float x);

int main(void)
{
    printf("prime(91) = %i\n", prime(91));
    printf("prime(143) = %i\n", prime(143));
    printf("prime(7) = %i\n", prime(7));
    printf("prime(73) = %i\n", prime(73));

    return 0;
}

bool prime(int n)
{
    int i;

    if (n < 2) return 0;
    if (n == 2) return 1;

    for (i = 3; i <= squareRoot(n); i+=2) {
        if (n % i == 0) return 0;
    }

    return 1;
}

float squareRoot(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    while (absoluteValue(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2;

    return guess;
}

float absoluteValue(float x)
{
    if (x < 0)
        x = -x;
    return (x);
}
