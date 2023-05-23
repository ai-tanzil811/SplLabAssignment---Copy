#include<stdio.h>
int main()
{
    int limit;
    scanf("%d", &limit);
    for(int i=1;i<=limit;i+=2)
    {
        printf("%d", i);
        if(i<limit)
        {
            printf(",");
        }
        else
        {
            printf(".");
        }
    }
    return 0;
}