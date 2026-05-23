#include <stdio.h>
#include <stdlib.h>

FILE *openFile(const char *fileName, const char *mode)
{
    FILE *file;

    if ( (file = fopen(fileName, mode)) == NULL) {
        fprintf(stderr, "unable to open file %s for reading.\n", fileName);
        exit(EXIT_FAILURE);
    }

    return file;
}

