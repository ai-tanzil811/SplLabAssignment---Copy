// Write C program to tanzil first and last digit of a number
// Ashraful   ISlam Tanzil 0112230028
#include <stdio.h>
#include <math.h>

int main()
{
    int Input, first, last, tanzil, divide, digit;

    scanf("%d", &Input);
    digit = log10(Input);
    divide = pow(10, digit);
    first = Input / divide; // first digit alada kora
    Input = Input % divide;
    last = Input % 10; // last digit ekok er ghore tai 10 er moddhe dite hobe
    Input = Input / 10;
    tanzil = last * divide + Input * 10 + first;
    printf("%d", tanzil);

    return 0;
}