#include <stdio.h>

int main(void)
{
    int n, number, triangularNumber = 0;

    printf("Which triangular number do you want?  ");
    scanf("%i", &number);

    for(n = 1; n <= number; ++n) {
        triangularNumber += n;
    }

    printf("Triangular number of %i = %i\n", number, triangularNumber);

    return 0;
}
