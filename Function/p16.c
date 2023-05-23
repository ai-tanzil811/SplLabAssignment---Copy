//  Function that multiplies the array elements by 2 and returns the array
//  Ashraful Islam Tanzil 0112230028
#include <stdio.h>
#define n 100
int laxmiCheatFund(int arr[100], int s);
int main()
{
    int input;
    int arr[n];
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
    }
    laxmiCheatFund(arr, input);
    for (int i = 0; i < input; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
int laxmiCheatFund(int arr[n], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        arr[i] *= 2;
    }
    return arr[n];
}
