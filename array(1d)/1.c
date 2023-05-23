// WAP that will take n integer numbers into an array, and then print all the integers into
// reverse order (from the last valid index to index 0).
//0112230028
#include <stdio.h>
int main()
#define x 100
{
    int a[x];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The following array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf("_");
    }
    printf("\nThe reverse array :");
    for (int i = n - 1; i >= 0; i--)
    {

        printf("%d ", a[i]);
        if (i > 0)
            printf(" ,");
    }
    return 0;
}