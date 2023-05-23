#include <stdio.h>
int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 == 0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        if (i < limit)
        {
            printf(",");
        }
    }
    return 0;
}