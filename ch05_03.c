#include <stdio.h>

int main(void)
{
    int number, remainder;

    printf("Enter a number to test: ");
    scanf("%i", &number);

    remainder = number % 2;

    if (remainder != 0)
        printf("This is an odd number.\n");

    if (remainder = 0)
        printf("This is an even number.\n");

    return 0;
}
