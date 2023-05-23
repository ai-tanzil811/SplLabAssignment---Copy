#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("Maximum value of three integers: %d\n",a);
    }
    else if(b>a && b>c)
    {
        printf("Maximum value of three integers: %d\n",b);
    }
    else
    {
        printf("Maximum value of three integers: %d\n",c);
    }
    return 0;
}