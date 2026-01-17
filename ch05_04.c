#include <stdio.h>

int main(void)
{
    int number, remainder;

    printf("Enter a number to test: ");
    scanf("%i", &number);

    remainder = number % 2;

    if (remainder != 0) 
        printf("This number is odd.\n");
    else
        printf("This number is even.\n");

    return 0;
}
