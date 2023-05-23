// Sum up even number in array
#include <stdio.h>
#define n 100
int tanzil(int a[n], int s);
int main()
{
    int size;
    scanf("%d", &size);
    int a[n];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int z = tanzil(a[], size);
    printf("%d", z);
    return 0;
}
int tanzil(int a[n], int s)
{
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] % 2 == 0)
            sum += a[i];
    }
    return sum;
}
