#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int temp=1;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
          if((i+j-1)%2==0)
          {
            printf("0");
          }
            else
            {
                printf("1");
            }
        }
        temp=1;
        printf("\n");
    }
}