#include <stdio.h>
int main()
{
    int p, r, t, si;
    printf("Input principle, Rate of interest & time to find simple interest:\n");
    printf("Input principle: ");
    scanf("%d", &p);
    printf("Input rate of interest: ");
    scanf("%d", &r);
    printf("Input time: ");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("Simple interest = %d\n", si);
    return 0;
}