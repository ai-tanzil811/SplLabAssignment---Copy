#include <stdio.h>//no aray
int main()
{
    int n, i, max, pos;
    printf("Input 6 numbers (integer values):\n");
    for (i = 1; i <= 7; i++)
    {
        printf("%d: ", i);
        scanf("%d", &n);
        if (i == 1)
        {
            max = n;
            pos = i;
        }
        else
        {
            if (n > max)
            {
                max = n;
                pos = i;
            }
        }
    }
    printf("\nMaximum value: %d\n", max);
    printf("Position: %d\n", pos);
    return 0;
}