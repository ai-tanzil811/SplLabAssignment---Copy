// Write C program to find first and last digit of any number
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
#include <math.h>

int main()
{
    int input, first, last,digit, divide;
    scanf("%d", &input);
    // find first digit
    digit = log10(input);
    divide = pow(10, digit);
    first = input / divide;
    printf("FIRST NUMBER = %d\n", first);
    printf("last NUMBER = %d\n", input % 10);

    return 0;
}