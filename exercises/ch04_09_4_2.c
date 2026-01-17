#include <stdio.h>

// Rewrite  Programs 4.2 through 4.5 , replacing all uses of the  for statement with equivalent 
// while statements. Run each program to verify that both versions are identical.
int main(void)
{
    int n = 1, triangularNumber = 0;

    while (n <= 200) {
        // triangularNumber = n * (n + 1) / 2;
        triangularNumber += n;
        ++n;
    }

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;

}
