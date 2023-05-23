// Write a C program to print sum of digits enter by user
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int Input, temp, sum = 0;
    scanf("%d", &Input);
    while (Input != 0)
    {
        temp = Input % 10;
        sum += temp;
        Input = Input / 10;
    }
    printf("%d", sum);
}