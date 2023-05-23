#include <stdio.h>
#include <math.h>
int main()
{
    
    printf("Input a positive number ");
    int x;
    scanf("%d", &x);
    if(x <= 0)
    {
        printf("Input a positive number ");
        scanf("%d", &x);
    }
    int count = 0;
    int max = x;
    int min = x;
    int sum = 0;
    while(x > 0)
    {
        count++;
        sum += x;
        if(x > max)
        {
            max = x;
        }
        if(x < min)
        {
            min = x;
        }
        printf("Input a positive number ");
        scanf("%d", &x);
    }
    printf("Number of positive values entered is %d\n", count);
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is %f\n", (float)sum / count);
    return 0;
}