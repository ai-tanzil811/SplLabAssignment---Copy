#include <stdio.h>
int main()
{
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
       scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == 3)
        {
            count++;
        }
    }
    printf("The number of threes in the said number is %d\n", count);
    return 0;
}