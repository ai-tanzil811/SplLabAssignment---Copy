//Write C program to find factorial of any number
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int Input, Factorial = 1;
    scanf("%d", &Input);
    for (int i = 1; i <= Input; i++)
    {
        Factorial*= i;
    }
    printf("The result is: %d", Factorial);
    return 0;
}