#include <stdio.h>

void sort3(int *a, int *b, int *c)
{
    int temp;
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*b > *c) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(void)
{
    int a = 34, b = -5, c = 6;

    printf("Before sort: %i %i %i\n", a, b, c);
    sort3(&a, &b, &c);
    printf("After sort: %i %i %i\n", a, b, c);

    return 0;
}
