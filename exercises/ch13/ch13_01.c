#include <stdio.h>

typedef int (*FunctionPtr)(void);

int myFunc(void)
{
    return 42;
}

int main(void)
{
    FunctionPtr ptr;

    ptr = myFunc;

    int result = ptr();
    printf("%i\n", result);

    return 0;
}
