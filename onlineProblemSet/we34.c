#include<stdio.h>
int main()
{
    int a,b;
    int sum=0;
    printf("Input a pair of numbers (for example 10,2):\n");
    printf("Input first number of the pair: ");
    scanf("%d",&a);
    printf("Input second number of the pair: ");
    scanf("%d",&b);
    printf("List of odd numbers: ");
    for(int i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            sum+=i;
        }
    }
    printf("Sum=%d\n",sum);
    return 0;
}