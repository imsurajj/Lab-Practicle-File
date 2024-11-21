/* Write a program
      (i) matrix addition
      (ii) matrix multiplication
      (iii)Matrix Transpose on 2D arrays
 */

/* 1. Matrix Addition */
#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/* 2. Matrix Multiplication */

#include <stdio.h>
int main()
{
    int rows, cols;
    // Get the dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols; ++k)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("\nResult matrix:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/* Matrix Transpose */
#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1,
                   j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("%d ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i)
        for (int j = 0; j < r; ++j)
        {
            printf("%d ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}