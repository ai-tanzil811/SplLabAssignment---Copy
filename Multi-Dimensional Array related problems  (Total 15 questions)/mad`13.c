#include<stdio.h>
#define m 100
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if (a[i][j]!=a[j][i])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag==0)
    {
        printf("yes");
    }
    else
    {
        printf("Not");
    }
    return 0;
}