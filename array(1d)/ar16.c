//uncompleted code

#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[100];
    int count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]!=b[j])
            {
                c[i]=a[i];
                count++;
            }
        }
    }
    for(int i=0;i<count;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}