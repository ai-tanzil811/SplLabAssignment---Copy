#include <stdio.h>
int main()
{
    int num[7], even = 0, odd = 0, pos = 0, neg = 0, i;
    printf("Input 7 integers:\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
            even++;
        else
            odd++;
        if (num[i] > 0)
            pos++;
        else
            neg++;
    }
    printf("\nNumber of even values: %d\n", even);
    printf("Number of odd values: %d\n", odd);
    printf("Number of positive values: %d\n", pos);
    printf("Number of negative values: %d\n", neg);
    return 0;
}