#include <stdio.h>

/* void sort(int *array, int n) */
/* { */
/*     int *bound1 = array + n - 1, *bound2 = array + n; */
/*     int *j, temp; */
/*     for (; array < bound1; ++array) { */
/*         for (j = array + 1; j < bound2; ++j) { */
/*             if (*array > *j) { */
/*                 temp = *array; */
/*                 *array = *j; */
/*                 *j = temp; */
/*             } */
/*         } */
/*     } */
/* } */

void sort(int *array, int n)
{
    int *arrayEnd = array + n;
    int *arrayNearEnd = array + n - 1;
    int *altArray, temp;

    for (; array < arrayNearEnd; ++array) {
        for (altArray = array + 1; altArray < arrayEnd; ++altArray) {
            if (*array > *altArray) {
                temp = *altArray;
                *altArray = *array;
                *array = temp;
            }
        }
    }
}

int main(void)
{
    int a[16] = {};
    int  array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                       44, -3, -9, 12, 17, 22, 6, 11 };
    int i;

    printf("The array before the sort:\n");
    for (i = 0; i < 16; ++i)
        printf("%i ", array[i]);

    sort(array, 16);

    printf("\n\nThe array after the sort:\n");

    for (int i = 0; i < 16; ++i)
        printf("%i ", array[i]);

    printf("\n");
    return 0;
}
