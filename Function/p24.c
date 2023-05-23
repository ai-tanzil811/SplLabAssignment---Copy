//  Program that continuously takes two positive integers as inputs and uses two functions to
// find their GCD (greatest common divisor) and LCM (least common multiple). Both functions
// take parameters and returns desired values.
// [Hint: Use infinite loop to process inputs]
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int GCD(int a, int b);
int LCM(int a, int b);
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("GCD : %d", GCD(x, y));

    printf("\nLCM : %d", LCM(x, y));

    return 0;
}

int GCD(int input1, int input2)
{

    int num1, num2, rem, gcd;
    num1 = input1;
    num2 = input2;
    while (num2 != 0)
    {
        rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }
    gcd = num1;
    return gcd;
}
int LCM(int a1, int a2)
{
    int K;
    K = (a1 * a2) / GCD(a1, a2);
    return K;
}
