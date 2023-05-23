
#include <stdio.h>
int main()
{
    int input[6], i, min, pos;
    printf("Input the 6 members of the array:\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &input[i]);
    }
    min = input[0];
    pos = 0;
    for (i = 1; i < 6; i++)
    {
        if (input[i] < min)
        {
            min = input[i];
            pos = i;
        }
    }
    printf("Smallest Value: %d\n", min);
    printf("Position of the element: %d\n", pos);
    return 0;
}