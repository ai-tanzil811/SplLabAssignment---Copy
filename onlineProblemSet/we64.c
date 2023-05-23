#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z, sum;
    printf("Input a positive number less than 100: ");
    scanf("%d", &x);
    if(x > 100)
    {
        printf("Input a positive number less than 100: ");
        scanf("%d", &x);
    }
    int temp = x;
   for(int i = 1; i <= x; i++)
   {
       sum += pow(i, 4);
   }
    printf("Sum of the series is %d\n", sum);
    return 0;
}