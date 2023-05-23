#include <stdio.h>
int main()
{
    int a, b, gcd, lcm, temp;
    scanf("%d%d",&a,&b);
    int x = a;
    int y = b;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    lcm = (a * b) / gcd;
    printf("GCD : %d", gcd);
    printf("\nLCM : %d", lcm);
    return 0;
}