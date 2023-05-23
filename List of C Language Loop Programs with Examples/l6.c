//Write C program to find sum of even numbers between 1 to n
//Ashraful Islam tanzil 0112230028
#include<stdio.h>
int main()
{
    int Input,sum=0;
    scanf("%d",&Input);
    for (int i =1;i<=Input;i++)
    {
        if(i%2==0)
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
