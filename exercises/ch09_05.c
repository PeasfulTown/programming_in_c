#include <stdio.h>
#include <stdbool.h>

int string_length(const char string[])
{
    int i = 0;
    while (string[i] != '\0')
        ++i;

    return i;
}


int findString(const char source[], const char search[])
{
    int string_length(const char string[]);
    int i, j, wi = -1;
    int sl1 = string_length(source), sl2 = string_length(search);
    bool found = false;

    for (i = 0, j = 0; sl1 - i + j >= sl2 && j < sl2; ++i) {
        if (found && source[i] != search[j]) {
            found = false;
            j = 0;
        }

        if (source[i] == search[j]) {
            ++j;
            if (!found)
                found = true;
        }
    }

    if (found)
        wi = i - sl2;

    return wi;
}

int main(void)
{
    printf("%i\n", findString("the quick brown fox jumps over the lazy dog", "fox"));
    printf("%i\n", findString("a chatterbox", "hat"));
    return 0;
}
