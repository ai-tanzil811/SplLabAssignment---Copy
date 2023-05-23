#include<stdio.h>
int main()
{
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
           if(i==0||i==4||j==0)
           {
                printf("# ");
           }
              else
              {
                printf("  ");
              }
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
           if(i==0||i==9||j==0)
           {
                printf("# ");
           }
              else
              {
                printf("  ");
              }
        }
        printf("\n");
    }
    printf("\n\n");
}