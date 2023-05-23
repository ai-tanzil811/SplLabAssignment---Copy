
#include <stdio.h>
int main()
{
    int input, i, j;
    float sum = 0;
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        sum += 1 / (float)i;
    }
    printf("Value of S: %.2f\n", sum);
    return 0;
}