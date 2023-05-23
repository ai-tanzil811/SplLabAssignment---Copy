#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Input 5 integers: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int max=a;
    int pos=1;
    if(b>max)
    {
        max=b;
        pos=2;
    }
    if(c>max)
    {
        max=c;
        pos=3;
    }
    if(d>max)
    {
        max=d;
        pos=4;
    }
    if(e>max)
    {
        max=e;
        pos=5;
    }
    printf("Highest value: %d\n",max);
    printf("Position: %d\n",pos);
    return 0;
}