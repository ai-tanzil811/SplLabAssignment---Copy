#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int sum=0;
    printf("Input the first number: ");
    scanf("%d",&a);
    printf("Input the second number: ");
    scanf("%d",&b);
    printf("Input the third number: ");
    scanf("%d",&c);
    printf("Input the fourth number: ");
    scanf("%d",&d);
    printf("Input the fifth number: ");
    scanf("%d",&e);
    if(a%2!=0)
    {
        sum+=a;
    }
    if(b%2!=0)
    {
        sum+=b;
    }
    if(c%2!=0)
    {
        sum+=c;
    }
    if(d%2!=0)
    {
        sum+=d;
    }
    if(e%2!=0)
    {
        sum+=e;
    }
    printf("Sum of all odd values: %d\n",sum);
    return 0;
}