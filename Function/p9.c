// Function to calculate the factorial of a number
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int tanzil(int a);
int main()
{
    int input, z;
    scanf("%d", &input);
    z = tanzil(input);
    printf("%d", z);
    return 0;
}
int tanzil(int a)
{
    if (a == 0)
        return 1;
    else
        return (a * tanzil(a - 1));
}