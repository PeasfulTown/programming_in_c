/* Write a program that writes columns  m through  n of each line of a file to
 * stdout. Have the program accept the values of  m and  n from the terminal
 * window.
 */

#include <stdio.h>

#include "text.h"

int main(void)
{
    int m, n, i;

    printf("enter starting column: ");
    scanf("%i", &m);
    printf("enter finish column: ");
    scanf("%i", &n);

    FILE *file = openFile("testfile", "r");
    char buf[64];
    int c;

    while (fgets(buf, 64, file) != NULL) {
        for (i = m - 1; i <= (n - 1); ++i) {
            c = buf[i];
            if (c != '\n' && c != '\0')
                printf("%c", c);
            else
                break;
        }
        printf("\n");
    }
    return 0;
}
