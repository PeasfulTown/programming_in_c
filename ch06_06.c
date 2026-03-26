#include <stdio.h>

int main(void)
{
    // size of the array is determined automatically based on the number of
    // initialization elements
    // c language implicitly dimensions the array to six elements
    char word[] = { 'H', 'e', 'l', 'l', 'o', '!' }; // don't have to specify the
                                                    // number of elements when
                                                    // initializing values
    // alternative method without initializing every element in the array at the
    // point that the array is defined
    // here the largest index number specified sets the size of the array
    // sample_data is set to contain 100 elements based on the largest index
    // value of 99 that is specified
    float sample_data[] = { [0] = 1.0, [49] = 100.0, [99] = 200.0 };

    int i;

    for (i = 0; i < 6; ++i) {
        printf("%c", word[i]);
    }

    printf("\n");

    return 0;
}
