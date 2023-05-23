// Ashraful Islam Tanzil 0112230028
// WAP that will take n integer numbers into an array, and then sum up all the even indexed
// integers in that array.
#include <stdio.h>
int main()
#define x 100
{
    int a[x];
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i % 2 == 0)
            sum += a[i];
    }
    printf("The following array sum = %d", sum);

    return 0;
}