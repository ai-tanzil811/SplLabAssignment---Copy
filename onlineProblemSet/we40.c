#include<stdio.h>
int main()
{
    int a,b;
    printf("Input the first integer: ");
    scanf("%d",&a);
    printf("Input the second integer: ");
    scanf("%d",&b);
    printf("Numbers between %d and %d, divisible by 7 and the remainder is 2 or 3:\n",a,b);
    for(int i=a;i<=b;i++)
    {
        if(i%7==2||i%7==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}