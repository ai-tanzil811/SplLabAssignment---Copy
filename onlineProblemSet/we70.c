#include <stdio.h>
#include <math.h>
int main()
{
    for(int i=65;i<=90;i++)
    {
        printf("[%d-%c] \n", i, i);
    }
    printf("\n");
    for(int i=97;i<=122;i++)
    {
        printf("[%d-%c] \n", i, i);
    }
    printf("\n");
    return 0;
}