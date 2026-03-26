/* 6.  You don’t need to use an array to generate Fibonacci numbers. You can simply */
/* use three variables: two to store the previous two Fibonacci numbers and one to */
/* store the current one. Rewrite  Program  6.3 so that arrays are not used. */
/* Because you’re no longer using an array, you need to display each Fibonacci */
/* number as you generate it. */

#include <stdio.h>

int main(void)
{
    int fibMin1 = 1, fibMin2 = 0, fib;

    printf("0 1 ");

    for (int i = 2; i < 15; ++i) {
        fib = fibMin1 + fibMin2;
        printf("%i ", fib);
        fibMin2 = fibMin1;
        fibMin1 = fib;
    }

    printf("\n");

    return 0;
}
