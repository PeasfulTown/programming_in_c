#include <stdio.h>

int main(void)
{
    int number, sum = 0;

    printf("Enter number to calculate sum: ");
    scanf("%i", &number);

    while(number != 0) {
        sum += number % 10;
        number = number / 10;
    }

    printf("The sum of the intergers of the number is %i\n", sum);

    return 0;
}
