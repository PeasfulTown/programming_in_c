#include <stdio.h>

int main(void)
{
    float     f = 1.00; 
    short int i = 100; 
    long int  l = 500L; 
    double    d = 15.00; 

    f + i; // float 101.00
    l / d; // double 33.33
    i / l + f; // float 1.00
    l * i; // long 50000
    f / 2; // float 0.5
    i / (d + f); // double 6.25
    l / (i * 2.0); // double 2.5
    l + i / (double) l; // double 500.2

    return 0;
}
