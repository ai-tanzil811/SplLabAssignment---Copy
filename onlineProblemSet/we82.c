#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int input1 = input / 10000;
    int input2 = (input / 1000) % 10;
    int input3 = (input / 100) % 10;
    int input4 = (input / 10) % 10;
    int input5 = input % 10;
    if (input1 == input5 && input2 == input4)
    {
        printf("%d is a palindrome.\n", input);
    }
    else
    {
        printf("%d is not a palindrome.\n", input);
    }
}