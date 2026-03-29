#include <stdio.h>

int string_length(char string[])
{
    int i = 0;

    while (string[i] != '\0') {
        ++i;
    }

    return i;
}

void insert_string(char target[], char string[], int start)
{
    int i, j;
    int l1 = string_length(target);
    int l2 = string_length(string);

    // shift characters up to make space for new string
    for (i = l1 - 1, j = l1 + l2 - 1; i >= start; --i, --j) {
        target[j] = target[i];
    }

    target[l1 + l2] = '\0';

    // insert string
    for (i = start, j = 0; string[j] != '\0'; ++i, ++j) {
        target[i] = string[j];
    }
}

int main(void)
{
    char text[20] = "the wrong son";

    printf("%s\n", text);
    insert_string(text, "per", 0);
    printf("%s\n", text);

    return 0;
}
