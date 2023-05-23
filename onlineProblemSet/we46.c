#include <stdio.h>
int main()
{
    int input, i, j=1;
    int k=1;

    float sum = 0;
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        sum+=k/(float)j;
        j*=2;
        k+=2;

    }
    printf("Value of S: %.2f\n", sum);
    return 0;
}