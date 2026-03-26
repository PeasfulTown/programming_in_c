/* 3.  Write a program that accepts two integer values typed in by the user. Display the result */ 
/* of dividing the first integer by the second, to three-decimal-place accuracy. Remember to */ 
/* have the program check for division by zero. #include <stdio.h> */
#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num2 == 0) {
        printf("Cannot divide by zero\n");
    } else {
        printf("%d / %d = %.3g", num1, num2, (float) num1 / num2);
    }

    return 0;
}
