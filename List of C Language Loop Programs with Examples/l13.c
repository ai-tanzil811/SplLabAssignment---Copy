// Write C program to calculate power using while & for loop
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int n, p, r = 1;

    scanf("%d", &n);
    scanf("%d", &p);
    for (int i = 1; i <= p; i++)
    {
        r *= n;
    }
    printf("The result is: %d", r);
    return 0;
}