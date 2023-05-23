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
            if (i%2!=0||j%2!=0)
            {
                sum += a[i][j];
            }
        }
    }
    printf("%d", sum);
    return 0;
}
//|| j==0 && i>limit/2 || j==limit-1 && i<=limit/2 || i==limit-1 && j>=limit/2