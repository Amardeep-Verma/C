#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS])
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[rows][cols])
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[ROWS][COLS] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    int matrix2[ROWS][COLS] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};

    int result[ROWS][COLS];

    addMatrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    displayMatrix(ROWS, COLS, matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(ROWS, COLS, matrix2);

    printf("\nResultant Matrix:\n");
    displayMatrix(ROWS, COLS, result);

    return 0;
}
