// . Function to calculate the sum of n numbers coming from the console and stored in an array
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
#define x 100
int sum(int arr[x], int n);
int main()
{
    int num, i, result;
    scanf("%d", &num);
    int arr[x];
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    result = sum(arr, num);
    printf("Sum in Main:%d\n", result);
    return 0;
}
int sum(int arr[x], int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum in Function:%d\n", sum);
    return sum;
}