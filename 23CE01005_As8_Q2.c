/*
    LAB ASSIGNMENT: 08
    Question number: 02

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
*/

#include <stdio.h>
#include <stdlib.h>

void multiply(int r1, int c1, int r2, int c2, int (*mat1)[c1], int (*mat2)[c2], int (*result)[c2])
{

    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            *(*(result + i) + j) = 0;
            for (k = 0; k < c1; k++)
            {
                *(*(result + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));
            }
        }
    }
}

int main()
{
    int r1, c1, r2, c2;
    printf("Enter dimensions of first matrix (rows columns):\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter dimensions of second matrix (rows columns):\n");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("The input matrices are incompatible with matrix multiplication:\n");
        return 1;
    }

    int mat1[r1][c1];
    int mat2[r2][c2];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    int result[r1][c2];
    multiply(r1, c1, r2, c2, mat1, mat2, result);

    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}