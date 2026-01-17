#include <stdio.h>

// Rewrite  Programs 4.2 through 4.5 , replacing all uses of the  for statement with equivalent 
// while statements. Run each program to verify that both versions are identical.
int main(void)
{
    int n = 1, triangularNumber = 0;

    printf("Table of triangular numbers\n\n");
    printf(" n   | sum from 1 to n \n");
    printf("---  | --------------- \n");
        
    while (n <= 10) {
        triangularNumber += n;
        printf(" %2i  |     %i\n", n, triangularNumber);
        ++n;
    }

    return 0;
}

