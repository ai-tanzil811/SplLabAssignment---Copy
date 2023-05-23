#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum=0;
    int temp=0;
    for(int i=1;i<=n;i++)
    {
        temp=temp*10+i;
        sum=sum+temp;
    }
    printf("%d", sum);
    return 0;
}