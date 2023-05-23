#include <stdio.h>
int main()
{
    int k, mul = 1;
    for (k = 8; k <= 50; k++)
    {
        if (k % 6 == 0)
        {
            mul = mul * k;
        }
    }
    printf("%d", mul);
    return 0;
}