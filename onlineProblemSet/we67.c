#include <stdio.h>
#include <math.h>
int main()
{
    printf("Input the values of x and n: ");
    int x, n;
    scanf("%d %d", &x, &n);
    printf("x=%f; n=%d;\n", (float)x, n);
    printf("x to power n=%f\n", pow(x, n));
    return 0;
}