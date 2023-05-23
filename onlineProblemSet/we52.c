#include <stdio.h>
int main()
{
    int input[5], i, temp;
    printf("Input the 5 members of the array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &input[i]);
    }
    temp = input[0];
    input[0] = input[4];
    input[4] = temp;
    temp = input[1];
    input[1] = input[3];
    input[3] = temp;
    for (i = 0; i < 5; i++)
    {
        printf("array_n[%d] = %d\n", i, input[i]);
    }
    return 0;
}