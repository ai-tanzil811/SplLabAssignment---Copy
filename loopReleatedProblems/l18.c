// WAP that will determine whether a number is prime or not.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}