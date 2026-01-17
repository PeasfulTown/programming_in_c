#include <stdio.h>

// Program  4.5 allows the user to type in only five different numbers. Modify that program 
// so that the user can type in the number of triangular numbers to be calculated.
int main(void)
{
    int n, number, counter, times_calculated, triangularNumber;

    printf("Enter the number of triangular numbers to be calculated.\n");
    scanf("%i", &times_calculated);

    for (counter = 1; counter <= times_calculated; ++counter) {
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
