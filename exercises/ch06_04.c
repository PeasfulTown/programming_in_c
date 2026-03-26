//4.  Write a program that calculates the average of an array of 10
// floating-point values. 

#include <stdio.h>

int main(void)
{
    float values[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };

    float input, sum;
    int i;

    for (i = 0; i < 10; ++i) {
        sum += values[i];
    }

    printf("Average of all values: %f", sum / 10);

    return 0;
}
