#include <stdio.h>

void transposeMatrix(int nRows, int nCols, int matrix1[nRows][nCols], int matrix2[nCols][nRows]);
void printMatrix(int nRows, int nCols, int matrix[nRows][nCols]);

int main(void)
{
    int matrix1[][5] = {
        { 9, 3, 5, 2, 6 },
        { 8, 4, 1, 3, 7 },
        { 9, 2, 3, 4, 9 },
        { 4, 5, 3, 2, 0 }
    };

    int altMatrix1[5][4];

    transposeMatrix(4, 5, matrix1, altMatrix1);
    printMatrix(4, 5, matrix1);
    printMatrix(5, 4, altMatrix1);

    return 0;
}

void transposeMatrix(int nRows, int nCols, int matrix1[nRows][nCols], int matrix2[nCols][nRows])
{
    int row, col;

    for (row = 0; row < nRows; ++row)
        for (col = 0; col < nCols; ++col)
            matrix2[col][row] = matrix1[row][col];
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

