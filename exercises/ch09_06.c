#include <stdio.h>

int string_length(const char string[])
{
    int i = 0;
    while (string[i] != '\0')
        ++i;
    return i;
}

void removeString(char string[], int start, int count)
{
    int i, j;
    for (i = start, j = start + count; string[j] != '\0'; ++i, ++j, --count) {
        string[i] = string[j];
        string[j] = '\0';
    }

    while (i < start + count - 1) {
        string[i] = '\0';
        ++i;
    }
}

int main(void)
{
    char string[25] = "the whateverrrr son";
    printf("%s\n", string);
    removeString(string, 4, 12);
    printf("%s\n", string);
}
