#include <stdio.h>
#include <stdbool.h>

void intToStr(char output[], int input)
{
    int i = 0, j;
    char temp;
    bool isneg = false;

    if (input < 0) {
        isneg = true;
        input *= -1;
    }

    do {
        output[i] = input % 10 + '0';
        input = input / 10;
        ++i;
    } while (input != 0);

    if (isneg) {
        output[i++] = '-';
    }

    output[i] = '\0';

    for (j = 0, --i; j < i; ++j, --i) {
        temp = output[j];
        output[j] = output[i];
        output[i] = temp;
    }
}

int main(void)
{
    int number = 0;
    char string[10];

    intToStr(string, number);
    printf("%i -> %s\n", number, string);

    return 0;
}
