#include <stdio.h>

int array[] = { 9, 1, 3, 4, 1, 3, 32 };


int arraySum();

int main(void)
{
    printf("Array sum = %d\n", arraySum());

    return 0;
}

int arraySum()
{
    int sum = 0, i;

    for(i = 0; i < 7; ++i) {
        sum += array[i];
    }

    return sum;
}

