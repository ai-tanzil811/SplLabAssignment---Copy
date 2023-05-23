#include<stdio.h>
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
    int max = a[0][0];
    int rowLocation = 0, colLocation = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                rowLocation = i;
                colLocation = j;
            }
        }
    }
    printf("max = %d\nLocation: [%d][%d]", max, rowLocation, colLocation);
    return 0;

}