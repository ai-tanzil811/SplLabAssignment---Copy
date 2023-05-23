// Write a C program to check whether a number is Armstrong number or not
//  Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int Input, Sum = 0, Temp;
    scanf("%d", &Input);
    Temp = Input;
    while (Temp != 0)
    {
        int digit = Temp % 10;
        Sum += digit * digit * digit;
        Temp /= 10;
    }
    if (Sum == Input)
    {
        printf("The number is Armstrong");
    }
    else
    {
        printf("The number is not Armstrong");
    }
    return 0;
}