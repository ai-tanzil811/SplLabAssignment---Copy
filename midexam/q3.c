//0112230028 Ashraful Islam TAnzil
#include<stdio.h>
int main()
{
    int n,k=1;
    int flag;
    scanf("%d",&n);
    for(int i=1; i<=(n+1)/2; i++)
    {

        if(k==1)
        {
            flag =1;
        }
        if(k==n)

        {
            flag=-1;

        }

        if(flag ==1)
        {
            for(int j=1; j<=i; j++)
            {
              printf("%d",k);
              k++;
              if(k==n)
              {
                  flag==-1;
                  break;

              }
            }
        }
        if(flag==-1)
        {
            for(int j=1; j<=i; j++)
            {
              printf("%d",k);
              k--;
              if(k==1)
              {
                  flag==1;
                  break;

              }
            }

        }
         printf("\n");
    }

    return 0;
}






