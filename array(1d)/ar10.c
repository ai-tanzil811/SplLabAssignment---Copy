
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
    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    printf("ARRAY A : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nARRAY B : ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}