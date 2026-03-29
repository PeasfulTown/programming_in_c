#include <stdio.h>

void substring(const char source[], int start, int count, char target[])
{
    int i, j;

    for (i = start, j = 0; count > 0 && source[i] != '\0'; ++i, ++j, --count) {
        target[j] = source[i];
    }

    target[j + 1] = '\0';
}

int main(void)
{
    char result[20];

    void substring(const char source[], int start, int count, char result[]);

    substring("character", 4, 3, result);
    printf("target: %s\n", result);
    substring("two words", 4, 20, result);
    printf("target: %s\n", result);

    return 0;
}
