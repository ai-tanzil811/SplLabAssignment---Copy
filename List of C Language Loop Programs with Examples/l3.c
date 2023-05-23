// Write C program to print multiplication table of a given number
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int inputNumber;
    scanf("%d", &inputNumber);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", inputNumber, i, inputNumber * i);
    }
    return 0;
}