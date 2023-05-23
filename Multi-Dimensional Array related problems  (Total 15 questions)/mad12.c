// WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now reverse
// that matrix within itself and display it. Reversal means swap 1st column with the nth
// column, swap 2nd column with the (n-1)th column and so on...
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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col/2; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][col-j-1];
            a[i][col-j-1] = temp;
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