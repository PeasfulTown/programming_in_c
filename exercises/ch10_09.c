#include <stdio.h>

void readLine(char *buffer)
{
    char c;
    do {
        c = getchar();
        *buffer = c;
        ++buffer;
    } while (c != '\n');

    *(buffer - 1) = '\0';
}

int main(void)
{
    char string[50];
    readLine(string);
    printf("%s\n", string);
    return 0;
}
