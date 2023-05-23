#include <stdio.h>
#define m 100
int main()
{
    int limit;
    scanf("%d", &limit);
    int a[m][m];
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            if (i == j||i==0||i==limit-1||j==limit-i-1)
            {
                sum += a[i][j];
            }
        }
    }
    printf("%d", sum);
    return 0;
}