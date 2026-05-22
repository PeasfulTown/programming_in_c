#include <stdio.h>

#define MIN(x, y)  ((x) < (y) ? (x) : (y))

int main(void)
{
    printf("min 5, 1 = %i\n", MIN(5, 10));
    printf("min 2, 8 = %i\n", MIN(2, 8));
    printf("min -14, 14 = %i\n", MIN(-14, 14));
    printf("min 98, -23 = %i\n", MIN(98, -23));

    return 0;
}
