//Write a C program to check whether a number is palindrome or not
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int Input, Reverse = 0, Temp;
    scanf("%d", &Input);
    Temp = Input;
    while (Temp != 0)
    {
        int digit = Temp % 10;
        Reverse = Reverse * 10 + digit;
        Temp /= 10;
    }
    if (Reverse == Input)
    {
        printf("PALINDROME \n");
    }
    else
    {
        printf("NOT PALINDROME\n");
    }
    return 0;
}