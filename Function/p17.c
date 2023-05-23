//  Function to sort and return an input array in ascending order
//  Ashraful islam Tanzil 0112230028
#include <stdio.h>
#define x 100
void hankPim(int arr[x], int n);
int main()
{
    int a;
    scanf("%d", &a);
    int arr[x];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    hankPim(arr, a);
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void hankPim(int arr[x], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}