#include <stdio.h>
#include "chars.h"

#define printb(n) printf(# n " = %i\n", (n))

int main(void)
{
    char x = '4';
    char s = '\'';
    printb(IS_DIGIT(x));
    printb(IS_SPECIAL(x));
    printb(IS_SPECIAL(s));
    return 0;
}
