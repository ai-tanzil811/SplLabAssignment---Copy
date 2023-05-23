// WAP that will take inputs of two 3 x 3 sized matrix into two 2D array, suppose A and B. Now
// do C = A * B (multiplication). Finally display all the elements from matrix / 2D array C.
#include <stdio.h>
#define m 3
int main()
{
    int a[m][m], b[m][m], c[m][m];
    int row, col;
    scanf("%d %d", &row, &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}