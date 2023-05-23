2#include <stdio.h>
int main()
{
    int input, reverse = 0, remainder;
    printf("Input a number: ");
    scanf("%d", &input);
    while (input != 0)
    {
        remainder = input % 10;
        reverse = reverse * 10 + remainder;
        input /= 10;
    }
    printf("The reverse of the said number = %d\n", reverse);
    return 0;
}