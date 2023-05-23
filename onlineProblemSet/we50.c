#include <stdio.h>
int main()
{
    int input[5], i;
    printf("Input the 5 members of the array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &input[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (input[i] < 5)
        {
            printf("A[%d] = %d\n", i, input[i]);
        }
    }
    return 0;
}