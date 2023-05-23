#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Input the first number(a): ");
    scanf("%f",&a);
    printf("Input the second number(b): ");
    scanf("%f",&b);
    printf("Input the third number(c): ");
    scanf("%f",&c);
    float d = b*b-4*a*c;
    if(d>0)
    {
        float r1 = (-b+sqrt(d))/(2*a);
        float r2 = (-b-sqrt(d))/(2*a);
        printf("Root1 = %f\n",r1);
        printf("Root2 = %f\n",r2);
    }
    else
    {
        printf("Roots are imaginary\n");
    }
    return 0;
}