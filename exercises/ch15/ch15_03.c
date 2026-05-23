#include <stdio.h>
#include <stdlib.h>

#include "text.h"

int main(void)
{
    char inFile[64], outFile[64];
    FILE *in, *out;
    int c;

    printf("enter filename for copying: ");
    scanf("%63s", &inFile);
    printf("enter output filename: ");
    scanf("%63s", &outFile);

    in = openFile(inFile, "r");
    out = openFile(outFile, "w");

    while ( (c = getc(in)) != EOF ) {
        if (IS_LOWERCASE(c))
            c = c - 32;
        putc(c, out);
    }

    fclose(in);
    fclose(out);

    return 0;
}
