#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z, sum;
    printf("Input a positive number less than 500: ");
    scanf("%d", &x);
    if(x > 500)
    {
        printf("Input a positive number less than 500: ");
        scanf("%d", &x);
    }
    int temp = x;
    while(x > 0)
    {
        y = x % 10;
        z = x / 10;
        sum += y;
        x = z;
    }
    printf("Sum of the digits of %d is %d\n", temp, sum);
    return 0;
}