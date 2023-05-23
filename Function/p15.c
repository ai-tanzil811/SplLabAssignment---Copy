// Function that finds and returns the minimum value in an array.
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
#define n 100
int gump(int arr[n], int a);
int main()
{
    int size;
    int arr[n];
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Minimum Value: %d", gump(arr, size));
    return 0;
}
int gump(int arr[n], int a)
{
    int min;
    min = arr[0];
    for (int i = 1; i < a; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}