#include <stdlib.h>
#include <stdio.h>

FILE *openFile(const char *file)
{
    FILE *inFile;

    if ( (inFile = fopen(file, "r")) == NULL ) {
        fprintf(stderr, "Can't open %s for reading.\n", file);
        exit (EXIT_FAILURE);
    }

    return inFile;
}

int main(void)
{
    char fileName[64];
    printf("Enter filename: ");
    scanf("%63s", &fileName);
    FILE *file = openFile(fileName);

    fclose(file);
    return 0;
}

