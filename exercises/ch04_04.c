#include <stdio.h>
// The factorial of an integer  n , written  n! , is the product of the consecutive integers  1 
// through  n . For example, 5 factorial is calculated as 
// 5!  =  5 x 4 x 3 x 2 x 1  =  120 
// Write a program to generate and print a table of the first 10 factorials. 
int main(void)
{
    int factorial = 1;
    for (int n = 5; n != 0; --n) {
        factorial = factorial * n;
    }

    printf("Factorial of 5 (5!) is %i\n", factorial);

    return 0;
}
