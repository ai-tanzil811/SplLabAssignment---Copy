#include <stdio.h>
#include <math.h>
int main()
{
    printf("Input a value (negative): ");
    int x;
    scanf("%d", &x);
    printf("Original value = %d\n", x);
    printf("Absolute value = %d\n", abs(x));
    return 0;
}