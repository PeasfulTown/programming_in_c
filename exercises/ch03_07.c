#include <stdio.h>

// Write a program that evaluates the following expression and displays the results
// (remember to use exponential format to display the result):
// (3.31 * 10^-8 * 2.01 * 10^-7) / (7.16 * 10^-6 + 2.01 * 10^-8)
int main(void) 
{
    float result = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);

    printf("(3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8) = %e\n", result);

    return 0;
}
