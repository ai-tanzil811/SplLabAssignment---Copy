#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int num;
    printf("Input a positive number:\n");
    scanf("%d", &num);
    int lastNonZeroDigit ;
   int z= factorial(num);
    while (z % 10 == 0)
    {
        z /= 10;
    }
    printf("The last non-zero digit of the said factorial: %d\n", z);
    return 0;
}