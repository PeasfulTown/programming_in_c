/* 2.  Modify  Program  6.1 so that the elements of the array  values are initially */
/* set to  0 . Use a for loop to perform the initialization. */ 
#include <stdio.h>

int main(void)
{
    int values[10];
    int index;

    for (index = 0; index < 10; ++index) 
        values[index] = 0;

    for (index = 0; index < 10; ++index)
        printf("%i ", values[index]);

    printf("\n");
    return 0;
}
