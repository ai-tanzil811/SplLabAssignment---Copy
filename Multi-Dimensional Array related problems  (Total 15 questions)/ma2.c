#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Row-wise:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }

    }
    printf("\nColumn-wise:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[j][i]);
        }
    }
    return 0;
}