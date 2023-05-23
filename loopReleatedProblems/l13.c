#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int tanzil[100];
     tanzil[0]=1;
     tanzil[1]=1;
    for(int i=0;i<=a;i++)
    {
        tanzil[i+2]=tanzil[i]+tanzil[i+1];
    }
    for(int i=0;i<a;i++)
    {
        printf("%d", tanzil[i]);
        if(i<a-1)
        {
            printf(",");
        }
    }
    return 0;
}