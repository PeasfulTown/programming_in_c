/* 2.  Write a program that asks the user to type in two integer values at the terminal. Test 
these two numbers to determine if the first is evenly divisible by the second, and then 
display an appropriate message at the terminal. */

#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0) {
        printf("%d is divisible by %d", num1, num2);
    } else {
        printf("%d is NOT divisible by %d\n", num1, num2);
    }
    
    return 0;
}
