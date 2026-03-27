#include <stdio.h>
#include <stdbool.h>

void sort(int a[], int n, bool asc);

int main(void)
{
    int a[16] = {};
    int  array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                       44, -3, -9, 12, 17, 22, 6, 11 };
    int i;

    printf("The array before the sort:\n");
    for (i = 0; i < 16; ++i)
        printf("%i ", array[i]);

    sort(array, 16, 0);

    printf("\n\nThe array after the sort:\n");

    for (int i = 0; i < 16; ++i)
        printf("%i ", array[i]);

    printf("\n");
    return 0;
}

void sort(int a[], int n, bool asc)
{
    int i, j, temp;

    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (asc == 1) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            } else {
                if (a[i] < a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
}

