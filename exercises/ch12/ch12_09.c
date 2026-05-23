#include <stdio.h>

#define ABSOLUTE_VALUE(x) ((x) > 0 ? (x) : -(x))
#define printx(x) printf(# x " = %i\n", (x))

int main(void) {
    int x = -9;
    printx(ABSOLUTE_VALUE(x + 3));
    return 0;
}
