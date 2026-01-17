#include <stdio.h>

int main(void)
{
    int n, number, counter, triangularNumber;

    for (counter = 1; counter <= 5; ++counter) {
        printf("What number do you want to calculate? ");
        scanf("%i", &number);

        triangularNumber = 0;

        for (n = 1; n <= number; ++n) {
            triangularNumber += n;
        }

        printf("Triangular number for %i = %i\n", number, triangularNumber);
    }

    return 0;
}
