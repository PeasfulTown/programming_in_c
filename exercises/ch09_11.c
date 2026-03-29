#include <stdio.h>
#include <stdbool.h>

int strToInt(const char string[])
{
    int i = 0, val, result = 0;
    bool isneg = false;

    if (string[0] == '-') {
        isneg = true;
        i = 1;
    }

    while (string[i] >= '0' && string[i] <= '9') {
        val = string[i] - '0';
        result = result * 10 + val;
        ++i;
    }

    if (isneg)
        result *= -1;

    return result;
}

int main(void)
{
    char s1[] = "-100", s2[] = "98", s3[] = "324", s4[] = "-14";

    printf("%i\n", strToInt(s1));
    printf("%i\n", strToInt(s2));
    printf("%i\n", strToInt(s3));
    printf("%i\n", strToInt(s4));

    return 0;
}
