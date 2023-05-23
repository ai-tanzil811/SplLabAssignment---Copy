#include<stdio.h>
int main()
{
    int limit;
    scanf("%d", &limit);
    for(int i=1;i<=limit;i++)
    {
        printf("%d", i);
        if(i<limit)
        {
            printf(",");
        }
    }
    return 0;
}