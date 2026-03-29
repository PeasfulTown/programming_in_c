#include <stdio.h>
#include <stdbool.h>

struct entry {
    char word[15];
    char description[50];
};

int compare_string(const char s1[], const char s2[])
{
    int i = 0;
    int result;

    while (s1[i] != '\0' && s1[i] == s2[i]) {
        ++i;
    }

    if (s1[i] == s2[i])
        result = 0;
    else if (s1[i] > s2[i])
        result = 1;
    else
        result = -1;

    return result;
}

void dictionary_sort(struct entry dictionary[], const int entries)
{
    int i, j, comparison;
    struct entry temp;
    for (i = 0; i < entries - 1; ++i) {
        for (j = i + 1; j < entries; ++j) {
            comparison = compare_string(dictionary[i].word, dictionary[j].word);
            if (comparison > 0) {
                temp = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp;
            }
        }
    }
}

void print_dictionary(const struct entry dictionary[], const int entries)
{
    int i;
    for (i = 0; i < entries; ++i) {
        printf("%-15s - %50s\n", dictionary[i].word, dictionary[i].description);
    }
}

int main(void)
{
    struct entry dictionary[100] = {
        { "acumen",       "mentally sharp; keen" },
        { "abyss",        "a bottomless pit" },
        { "aigrette",     "an ornamental cluster of feathers" },
        { "addle",        "to become confused" },
        { "ahoy",         "a nautical call of greeting" },
        { "aerie",        "a high nest" },
        { "aardvark",     "a burrowing African mammal" },
        { "affix",        "to append; attach" },
        { "agar",         "a jelly made from seaweed" },
        { "ajar",         "partially opened" }
    };

    print_dictionary(dictionary, 10);
    printf("\n\n");
    dictionary_sort(dictionary, 10);
    print_dictionary(dictionary, 10);

    return 0;
}
