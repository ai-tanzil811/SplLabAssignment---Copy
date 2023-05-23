// WAP that will take n integer numbers into an array, and then find the maximum -
// minimum among them with its index position.
#include<stdio.h>
#define n 100
int main()
{
    int a[n];
    int size;
    int flag = 0;

    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            flag++;
        }
    }
    printf("MAX: %d INDEX : %d \n", max, flag);

    return 0;
}