/*
    LAB ASSIGNMENT: 08
    Question number: 05

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
*/

#include <stdio.h>
void swap(int *a, int *b)
{
    *a = (*a) ^ (*b);
    *b = (*a) ^ (*b);
    *a = (*a) ^ (*b);
}

void rotate(int size, int (*mat)[size], int n)
{
    n = n % 4;
    for (int l = 0; l < n; l++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                swap(&mat[i][j], &mat[j][i]);
            }
        }

        for (int i = 0; i < size; i++)
        {
            int first = 0, last = size - 1;
            while (first < last)
            {
                swap(&mat[i][first], &mat[i][last]);
                first++;
                last--;
            }
        }
    }
}
int main()
{
    int size, n;
    printf("Input size of matrix:\n");
    scanf("%d", &size);
    int mat[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Input entry (row=%d,column=%d):\n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Input n (The number of times to right rotate):\n");
    scanf("%d", &n);

    printf("Input matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", *(*(mat + i) + j));
        }
        printf("\n");
    }
    rotate(size, mat, n);

    printf("Output matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", *(*(mat + i) + j));
        }
        printf("\n");
    }
    return 0;
}