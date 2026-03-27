#include <stdio.h>

int origMatrix[][5] = {
    { 9, 3, 5, 2, 6 },
    { 8, 4, 1, 3, 7 },
    { 9, 2, 3, 4, 9 },
    { 4, 5, 3, 2, 0 }
};

int targetMatrix[5][4];

void transposeMatrix();
void printMatrix(int nRows, int nCols, int matrix[nRows][nCols]);

int main(void)
{
    printMatrix(4, 5, origMatrix);
    transposeMatrix();
    printMatrix(5, 4, targetMatrix);

    return 0;
}

void transposeMatrix()
{
    int row, col;

    for (col = 0; col < 5; ++col)
        for (row = 0; row < 4; ++row)
            targetMatrix[col][row] = origMatrix[row][col];
}

void printMatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
    int row, col;
    for (row = 0; row < nRows; ++row) {
        for (col = 0; col < nCols; ++col) 
            printf("%2d", matrix[row][col]);
        printf("\n");
    }

    printf("\n");
}

