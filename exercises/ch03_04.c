#include <stdio.h>

// write a program that converts 27degrees from degrees fahrenheit (F) to degrees Celsius
// (C) using the following formula: C = (F - 32) / 1.8

int main(void)
{
    int fahrenheit = 27;
    float celsius = (fahrenheit - 32) / 1.8;

    printf("%i degrees Fahrenheit = %f Celsius\n", fahrenheit, celsius);

    return 0;
}
