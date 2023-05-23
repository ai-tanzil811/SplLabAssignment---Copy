// Function to determine only even numbers in an array of input integers.
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
#define n 100
void Feluda(int arr[n], int size);
int main()
{
    int size;
    scanf("%d", &size);
    int a[n];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    Feluda(a, size);
    return 0;
}
void Feluda(int arr[n], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}