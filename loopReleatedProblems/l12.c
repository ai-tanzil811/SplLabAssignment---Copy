#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(i*i*(i+1));
    }
    printf("result : %d", sum);
    return 0;
}