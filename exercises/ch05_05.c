/* 5.  You developed  Program  4.9 to reverse the digits of an integer typed in */
/* from the terminal.  However, this program does not function well if you type in */
/* a negative number. Find out what happens in such a case and then modify the */
/* program so that negative numbers are correctly handled. For example, if the */
/* number −8645 is typed in, the output of the program should be 5468−. */ 

#include <stdio.h>

int main(void) 
{
    int numbers;

    printf("Enter a number: ");
    scanf("%d", &numbers);

    while (numbers != 0) {
        printf("%d", numbers < 0 ? -numbers % 10 : numbers % 10);
        if (numbers > -10)
            printf("-");
        numbers /= 10;
    }

    return 0;
}
