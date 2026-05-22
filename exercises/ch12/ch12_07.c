#include <stdio.h>

#define IS_LOWER_CASE(c) (((c) >= 'a') && ((c) <= 'z'))
#define IS_UPPER_CASE(c) (((c) >= 'A') && ((c) <= 'Z'))
#define IS_ALPHABETIC(c) (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))

int main(void)
{
    printf("IS_ALPHABETIC('r') = %i\n", IS_ALPHABETIC('r'));
    printf("IS_ALPHABETIC('4') = %i\n", IS_ALPHABETIC('4'));
    printf("IS_ALPHABETIC('U') = %i\n", IS_ALPHABETIC('U'));
    printf("IS_ALPHABETIC(']') = %i\n", IS_ALPHABETIC(']'));
    return 0;
}
