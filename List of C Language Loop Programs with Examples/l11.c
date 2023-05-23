// Write C program to calculate product of digits of a number
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int input, digits, divide, i, productValue = 1;
    scanf("%d", &input);
    int temp = input;

    while (temp != 0)

    {
        digits = temp % 10;

        productValue *= digits;
        temp = temp / 10;
    }
    printf("%d", productValue);
    return 0;
}