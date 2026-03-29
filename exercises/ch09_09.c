#include <stdio.h>
#include <stdbool.h>

int string_length(const char string[])
{
    int i = 0;

    while (string[i] != '\0')
        ++i;

    return i;
}

int find_string(const char source[], const char search[])
{
    int i, j, wi = -1;
    int l1 = string_length(source), l2 = string_length(search);
    bool found = false;

    for (i = 0, j = 0; l1 - i + j >= l2 && j < l2; ++i) {
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

    if (found) {
        wi = i - l2;
    }

    return wi;
}

void remove_string(char string[], int start, int count)
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

bool replace_string(char source[], char s1[], char s2[])
{
    int wi = find_string(source, s1);
    if (wi < 0)
        return false;
    remove_string(source, wi, string_length(s1));
    insert_string(source, s2, wi);
    return true;
}

int main(void)
{
    char s1[30] = "that is 1 hell of a program";
    char s2[] = "asterisk * test";
    bool found;

    printf("\"%s\" length = %i\n", s1, string_length(s1));
    replace_string(s1, "1", "one");
    printf("\"%s\" length = %i\n", s1, string_length(s1));


    printf("\"%s\" length = %i\n", s2, string_length(s2));
    replace_string(s2, "*", "");
    printf("\"%s\" length = %i\n", s2, string_length(s2));

    printf("Performing deletion of empty spaces.\n");

    do {
        found = replace_string(s1, " ", "");
        printf("\"%s\" length = %i\n", s1, string_length(s1));
    } while(found);

}

