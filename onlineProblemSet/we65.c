// 179 181 191 193 197
#include <stdio.h>
#include <math.h>
void prime(int a)
{
    int count = 0;
    for(int i=a;i>=1;i--)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d ", a);
    }
   
}
int main()
{
    printf("The prime numbers between 1 and 199 are:\n");
    int count = 0;
    for(int i=1;i<=200;i++)
    {
         for(int j=1;j<=20;j++)
         {
                prime(i);
                i++;
         }
            printf("\n");
          
    }
    return 0;
}