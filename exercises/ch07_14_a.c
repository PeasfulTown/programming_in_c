#include <stdio.h>
#include <stdbool.h>

int number = 137;

bool prime(void);
float squareRoot(void);
float absoluteValue(float n);

int main(void)
{
    printf("%d is a prime: %d\n", number, prime());

    return 0;
}

bool prime(void)
{
    int i;

    if (number == 2 || number == 3)
        return 1;

    if (number % 2 == 0)
        return 0;

    for (i = 3; i <= squareRoot(); i+=2) {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

float squareRoot(void)
{
    const float epsilon = .0001;
    float guess = 1.0;

    while (absoluteValue(guess * guess - number) >= epsilon) {
        guess = (number / guess + guess) / 2;
    }

    return guess;
}

float absoluteValue(float n)
{
    if (n < 0)
        n = -n;
    return n;
}
