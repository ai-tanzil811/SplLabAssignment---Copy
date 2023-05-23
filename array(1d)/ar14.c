
#include <stdio.h>
int main()
{
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[100];
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[100];
    int k = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("Empty set");
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            printf("%d ", c[i]);
        }
    }
    return 0;
}