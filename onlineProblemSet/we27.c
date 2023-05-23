#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int positive=0;
    int negative=0;
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
    if(a>0)
    {
        positive++;
    }
    else
    {
        negative++;
    }
    if(b>0)
    {
        positive++;
    }
    else
    {
        negative++;
    }
    if(c>0)
    {
        positive++;
    }
    else
    {
        negative++;
    }
    if(d>0)
    {
        positive++;
    }
    else
    {
        negative++;
    }
    if(e>0)
    {
        positive++;
    }
    else
    {
        negative++;
    }
    printf("Number of positive numbers: %d\n",positive);
    printf("Number of negative numbers: %d\n",negative);
    return 0;
}