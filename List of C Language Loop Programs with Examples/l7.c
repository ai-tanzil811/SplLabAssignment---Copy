// Write C program to find sum of odd numbers between 1 to n
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int Input;
    scanf("%d", &Input);
    for (int i = 1; i <= Input; i++)
    {
        if (i % 2 != 0)
            printf("%d\t",i);
    }

    return 0;
}