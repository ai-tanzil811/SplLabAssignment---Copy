#include<stdio.h>
int main()
{
    int limit;
    int k,sum=0;
    float avg;
    scanf("%d", &limit);
    for(int i=1;i<=limit;i++)
    {
        scanf("%d", &k);
        sum+=k;
    }
    avg=(float)sum/limit;
    printf("%.2f", avg);
    return 0;
}