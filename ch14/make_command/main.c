#include <stdio.h>

extern double result;
void doSquare(void);

int main(void)
{
    doSquare();

    printf("%g\n", result);

    return 0;
}

