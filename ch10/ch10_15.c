#include <stdio.h>

int stringLength(const char *string)
{
    const char *ptr = string;
    while (*ptr)
        ++ptr;
    return ptr - string;
}

int main(void)
{
    char array[] = "This is a string.";
    printf("%i  ", stringLength("stringLength test"));
    printf("%i  ", stringLength(""));
    printf("%i\n", stringLength("complete"));
    return 0;
}
