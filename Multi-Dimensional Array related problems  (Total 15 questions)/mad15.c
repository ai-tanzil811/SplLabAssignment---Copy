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
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
           sum += a[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}