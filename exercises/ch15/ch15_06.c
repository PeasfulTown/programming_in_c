#include <stdio.h>
#include <stdbool.h>

#include "text.h"

int main(void)
{
    FILE *file = openFile("testfile2", "r");
    char buf[64];
    int i = 0;
    char c;

    while (fgets(buf, 64, file) != NULL) {
        printf("%s", buf);
        ++i;

        if (i < 2)
            continue;

        printf("\ncontinue? ");
        scanf(" %c", &c);

        if (c == 'q')
            break;

        printf("\n");
        i = 0;
    }

    fclose(file);

    return 0;
}
