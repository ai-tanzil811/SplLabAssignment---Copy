#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d %d", &n, &a);
    switch (n > a)
    {
    case 1:
        if (n - a > 5)
        {
            printf("Difference is greater than 5 \n");
        }
        else
        {
            printf("Difference is less than or equal to 5 \n");
        }
        break;
    case 0:
        printf("Please give a larger value of n \n");
        break;
    }
    return 0;
}