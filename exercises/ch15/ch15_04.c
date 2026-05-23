/* Write a program that merges lines alternately from two files
 * if one file has fewer lines than the other, the remaining lines
 * from the larger file should simply be copied to stdout
 */

#include <stdio.h>
#include <stdbool.h>
#include "text.h"

int main(void)
{
    FILE *file1 = openFile("testfile", "r");
    FILE *file2 = openFile("testfile2", "r");
    char buffer1[64], buffer2[64];
    bool b1Null = false, b2Null = false;

    while (true) {
        if (!b1Null && (fgets(buffer1, 64, file1) != NULL))
            fprintf(stdout, "%s", buffer1);
        else
            b1Null = true;

        if (!b2Null && (fgets(buffer2, 64, file2) != NULL))
            printf("%s", buffer2);
        else
            b2Null = true;

        if (b1Null && b2Null)
            break;
    }
    fclose(file1);
    fclose(file2);

    return 0;
}
