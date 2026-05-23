#include <stdio.h>

#define printint(n) printf("%i\n", x ## n)

int main(void)
{
    int i;
    /* the macro can be used to print the 100 variables of variables x1-x100,
     * because the value of i will be concatenated with 'x', there might be a
     * slight error in the book here, for one, it calls `printx(i)` instead of
     * `printint(i)`, and the loop logic will only executes when i < 100 so the
     * x100 variable wouldn't be printed */
    for (i = 0; i < 100; ++i)
        printx(i);
    return 0;
}
