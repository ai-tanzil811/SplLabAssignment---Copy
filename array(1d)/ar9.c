
#include <stdio.h>
int main()
{
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ax;
    scanf("%d", &ax);
    int flag = 0;
     printf("\nFOUND AT INDEX :");
    for (int i = 0; i < n; i++)
    {
       if(a[i]==ax)
       {
           printf("%d ",i);
           flag=1;
       }

    }
    if(flag==0)
    {
        printf("NOT FOUND");
    }
    return 0;
}
   
