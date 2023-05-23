#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    int power=1;
    for(int i=1;i<=y;i++)
    {
        power=power*x;
    }
    printf("%d", power);
    return 0;
}