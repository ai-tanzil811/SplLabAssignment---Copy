#include<stdio.h>
int main()
{
    int a,b;
    printf("Input the first integer: ");
    scanf("%d",&a);
    printf("Input the second integer: ");
    scanf("%d",&b);
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        if(i%17!=0)
        {
            sum+=i;
        }
    }
    printf("Sum: %d\n",sum);
    return 0;
}