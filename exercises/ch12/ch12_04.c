#include <stdio.h>

#define MAX(A, B, C)  ( ((A) > (B) && (A) > (C)) ? (A) : (B) > (C) ? (B) : (C) )

int main(void)
{
    printf("MAX (5, 1, 6) = %i\n", MAX(5, 1, 6));
    printf("MAX (12, -43, 98) = %i\n", MAX(12, -43, 98));
    printf("MAX (45, 81, -9) = %i\n", MAX(45, 81, -9));
    printf("MAX (-32, -19, -4) = %i\n", MAX(-32, -19, -4));

    return 0;
}
