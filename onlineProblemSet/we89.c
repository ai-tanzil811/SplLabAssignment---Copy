#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z;
    long long int sum = 0;
    for (x = -2147483648; x <= 2147483647; x++)
    {
        for (y = -2147483648; y <= 2147483647; y++)
        {
            for (z = -2147483648; z <= 2147483647; z++)
            {
                sum += x + y + z;
            }
        }
    }
    printf("Result: %lld\n", sum);
    return 0;
}