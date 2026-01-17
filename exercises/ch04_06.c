#include <stdio.h>

// A minus sign placed in front of a field width specification causes the field to be displayed 
// left-justified . Substitute the following  printf() statement for the corresponding 
// statement in  Program  4.2 , run the program, and compare the outputs produced by both 
// programs. 

int main(void)
{

    printf(" n   |  n^2\n");
    printf("-----|-----\n");
    for (int n = 1; n <= 10; ++n) {
        printf(" %-2i  |  %3i\n", n, n * n);
    }

    return 0;
}
