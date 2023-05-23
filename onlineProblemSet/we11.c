#include <stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    float sum = (a*b+c*d)/(b+d);
    printf("Average Value = %f\n",sum);
    return 0;
}