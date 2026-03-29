#include <stdio.h>

void uppercase(char string[])
{
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] = string[i] - 'a' + 'A';
        ++i;
    }
}

int main(void)
{
    char string[] = "a string IN lowercase";

    printf("%s\n", string);
    uppercase(string);
    printf("%s\n", string);

    return 0;
}
