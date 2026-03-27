#include <stdio.h>

int arraySum(int numbers[], int numberOfElements);

int main(void)
{
    int array1[] = { 9, 1, 3, 4, 1, 3, 32 };
    int array2[] = { 38, 19, 84, 18, 42, 90 };
    int array3[] = { 0, 23, 84, 12, 43, 99 };

    printf("Array1 sum = %d\n", arraySum(array1, 7));
    printf("Array2 sum = %d\n", arraySum(array2, 6));
    printf("Array3 sum = %d\n", arraySum(array3, 6));

    return 0;
}

int arraySum(int numbers[], int numberOfElements)
{
    int sum = 0, i;

    for(i = 0; i < numberOfElements; ++i) {
        sum += numbers[i];
    }

    return sum;
}
