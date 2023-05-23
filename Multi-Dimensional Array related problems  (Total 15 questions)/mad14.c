// WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n. Now
// replace all the duplicate integers by -1 in that matrix. Finally display it.
#include <stdio.h>
#define m 100
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[m][m];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    int temp;
    int duplicate = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
           if(duplicate == a[i][j])
           {
               a[i][j] = -1;
           }
           else
           {
               duplicate = a[i][j];
           }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}