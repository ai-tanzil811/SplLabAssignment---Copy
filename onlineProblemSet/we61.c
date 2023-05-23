#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf("Input value of x: ");
    scanf("%lf", &x);
    printf("Value of sin(1/x) is %.4lf\n", sin(1/x));
    return 0;
}