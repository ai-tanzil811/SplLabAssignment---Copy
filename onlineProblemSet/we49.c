#include <stdio.h>
int main()
{
    int input[7], i;
    printf("Input the first number of the array: ");
    scanf("%d", &input[0]);
    for (i = 1; i < 7; i++)
    {
        input[i] = input[i - 1] * 3;
    }
    for (i = 0; i < 7; i++)
    {
        printf("n[%d] = %d\n", i, input[i]);
    }
    return 0;
}