#include <stdio.h>
int main()
{
    int input[7], i;
    printf("Input the 5 members of the array:\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &input[i]);
    }
    for (i = 0; i < 7; i++)
    {
        if (input[i] <= 0)
        {
            input[i] = 100;
        }
    }
    for (i = 0; i < 7; i++)
    {
        printf("n[%d] = %d\n", i, input[i]);
    }
    return 0;
}