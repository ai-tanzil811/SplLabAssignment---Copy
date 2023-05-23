#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int temp=a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
           printf("%d ",temp);
           temp--;
        }
        temp=a;
        printf("\n");
    }
}