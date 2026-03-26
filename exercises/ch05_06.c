/* 6.  Write a program that takes an integer keyed in from the terminal and */
/* extracts and displays each digit of the integer in English. So, if the user */
/* types in 932, the program should display nine three two Remember to display */
/* “zero” if the user types in just a 0. ( Note: This exercise is a hard one!) */ 

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int temp = number, operand = 1;

    while (temp > 9) {
        temp = temp / 10;
        operand = operand * 10;
    }

    while (operand > 0) {
        switch (number / operand) {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
        printf(" ");
        number = number % operand;
        operand = operand / 10;
    }

    return 0;
}
