#include <stdio.h>

// Write a program to find the next largest even multiple for the following values 
// of i and j:
// i        j
// 365      7
// 12,258   23
// 996      4

int main(void)
{
    int i1 = 365,   i2 = 12258, i3 = 996;
    int j1 = 7,     j2 = 23,    j3 = 4;

    int result1 = i1 + j1 - i1 % j1;
    int result2 = i2 + j2 - i2 % j2;
    int result3 = i3 + j3 - i3 % j3;

    printf("Next largest even multiple:\n");
    printf("i = %i, j = %i, result = %i\n", i1, j1, result1);
    printf("i = %i, j = %i, result = %i\n", i2, j2, result2);
    printf("i = %i, j = %i, result = %i\n", i3, j3, result3);

    return 0;
}
