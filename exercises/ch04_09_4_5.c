#include <stdio.h>

// Rewrite  Programs 4.2 through 4.5 , replacing all uses of the  for statement with equivalent 
// while statements. Run each program to verify that both versions are identical.
int main(void)
{
    int n, number, counter = 1, triangularNumber;

    while (counter <= 5) {
        printf("What number do you want to calculate? ");
        scanf("%i", &number);

        n = 1, triangularNumber = 0;

        while(n <= number) {
            triangularNumber += n;
            ++n;
        }

        printf("Triangular number for %i = %i\n", number, triangularNumber);
        ++counter;
    }

    return 0;
}
