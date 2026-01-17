#include <stdio.h>

// Rewrite  Programs 4.2 through 4.5 , replacing all uses of the  for statement with equivalent 
// while statements. Run each program to verify that both versions are identical.
int main(void)
{
    int n, number, triangularNumber = 0;

    printf("Which triangular number do you want?  ");
    scanf("%i", &number);

    while(n <= number) {
        triangularNumber += n;
        ++n;
    }

    printf("Triangular number of %i = %i\n", number, triangularNumber);

    return 0;
}
