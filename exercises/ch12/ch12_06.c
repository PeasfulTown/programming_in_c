#include <stdio.h>

#define IS_UPPER_CASE(c) (((c) >= 'A') && ((c) <= 'Z'))

int main(void)
{
    printf("is_upper_case('D') = %i\n", IS_UPPER_CASE('D'));
    printf("is_upper_case('x') = %i\n", IS_UPPER_CASE('x'));
    printf("is_upper_case('A') = %i\n", IS_UPPER_CASE('A'));
    printf("is_upper_case('i') = %i\n", IS_UPPER_CASE('i'));

    return 0;
}
