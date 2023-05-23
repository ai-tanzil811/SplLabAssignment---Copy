#include<stdio.h>
int main()
{
    int x,y;
    printf("Input two numbers:\n");
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    if(y==0)
    {
        printf("Division is not possible!\n");
    }
    else
    {
        printf("%d/%d=%.1f\n",x,y,(float)x/y);
    }
    return 0;
}