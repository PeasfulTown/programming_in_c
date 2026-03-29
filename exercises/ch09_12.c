#include <stdio.h>
#include <stdbool.h>

float strToFloat(const char string[])
{
    int i = 0, mult;
    float val, result = 0;
    bool isneg = false;

    if (string[i] == '-') {
        isneg = true;
        ++i;
    }

    while (string[i] >= '0' && string[i] <= '9') {
        val = string[i] - '0';
        result = result * 10 + val;
        ++i;
    }

    if (string[i] == '.') {
        ++i;
        mult = 10;
        while (string[i] >= '0' && string[i] <= '9') {
            val = string[i] - '0';
            result = result + val / mult;
            mult *= 10;
            ++i;
        }
    }

    return result;
}

int main(void)
{
    char f1[] = "-867.6921", f2[] = "43.5", f3[] = "12.3423";
    printf("%s = %f\n", f1, strToFloat(f1));
    printf("%s = %f\n", f2, strToFloat(f2));
    printf("%s = %f\n", f3, strToFloat(f3));

    return 0;
}
