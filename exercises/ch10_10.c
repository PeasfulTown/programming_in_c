#include <stdio.h>

int compare_strings(char *str1, char *str2)
{
    while (*str1 == *str2 && *str1 != '\0') {
        ++str1; ++str2;
    }

    if (*str1 == *str2) 
        return 0;
    else if (*str1 < *str2)
        return -1;
    else
        return 1;
}

int main(void)
{
    char str1[] = "adverse";
    char str2[] = "advert";
    printf("compare_strings(%s, %s) = %i\n", str1, str2
            , compare_strings(str1, str2));
    return 0;
}
