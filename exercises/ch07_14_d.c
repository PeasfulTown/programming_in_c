#include <stdio.h>
#include <stdbool.h>

int gArray[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                   44, -3, -9, 12, 17, 22, 6, 11 };

void sort(bool asc);

int main(void)
{
    int i;

    printf("The array before the sort:\n");
    for (i = 0; i < 16; ++i)
        printf("%i ", gArray[i]);

    sort(0);

    printf("\n\nThe array after the sort:\n");

    for (int i = 0; i < 16; ++i)
        printf("%i ", gArray[i]);

    printf("\n");
    return 0;
}

void sort(bool asc)
{
    int i, j, temp;

    for (i = 0; i < 16 - 1; ++i) {
        for (j = i + 1; j < 16; ++j) {
            if (asc == 1) {
                if (gArray[i] > gArray[j]) {
                    temp = gArray[i];
                    gArray[i] = gArray[j];
                    gArray[j] = temp;
                }
            } else {
                if (gArray[i] < gArray[j]) {
                    temp = gArray[i];
                    gArray[i] = gArray[j];
                    gArray[j] = temp;
                }
            }
        }
    }
}


