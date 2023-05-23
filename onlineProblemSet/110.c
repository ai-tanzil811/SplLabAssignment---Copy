#include <stdio.h>
int main()
{
    int n, i;
    printf("Input a number (integer): ");
    scanf("%d", &n);
    printf("\nRemainder value is 3 after divide all numbers between 1 and 100 by %d:\n", n);
    for (i = 1; i <= 100; i++)
    {
        if (i % n == 3)
            printf("%d\n", i);
    }
    return 0;
}