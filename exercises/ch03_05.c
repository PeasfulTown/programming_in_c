#include <stdio.h>

// What output would you expect from the following program?
int main(void)
{
    char c, d;
    
    c = 'd';
    d = c;

    printf("d = %c\n", d); // 'd'

    return 0;
}
