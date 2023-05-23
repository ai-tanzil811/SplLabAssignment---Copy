#include <stdio.h>
int main()
{
    float input[4], max, min;
    int i;
    printf("Input four numbers: ");
    for (i = 0; i < 4; i++)
    {
        scanf("%f", &input[i]);
    }
    max = input[0];
    min = input[0];
    for (i = 1; i < 4; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
        if (input[i] < min)
        {
            min = input[i];
        }
    }
    printf("Difference is %.4f\n", max - min);
    return 0;
}