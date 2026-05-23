#include <stdio.h>

int main(void)
{
    FILE *inp;
    int c;

    // inp = fopen("testfile", "r");

    if ( (inp = fopen("testfile", "r")) == NULL )
        printf("*** testfile could not be opened.\n");
    else {
        while ( (c = getc(inp)) != EOF )
            putchar(c);

        fclose(inp);
    }

    return 0;
}


