#include <stdio.h>
#include <math.h>
int main()
{
    printf("n 2 to power n 2 to power -n\n");
    for(int i=0;i<=10;i++)
    {
        printf("%d %d %lf\n", i, (int)pow(2, i), 1/pow(2, i));
    }
    return 0;
}