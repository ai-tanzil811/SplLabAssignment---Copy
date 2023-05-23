// WAP that will take n integer numbers into an array, and then reverse all the integers
// within that array. Finally print them all from 0 index to last valid index.
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
    printf("\nThe reverse array :");
    for (int i = n - 1; i >= 0; i--)
    {

        printf("%d ", a[i]);
        if (i > 0)
            printf(" ,");
    }
    return 0;
}