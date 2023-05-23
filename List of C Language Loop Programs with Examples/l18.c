//Write a C program to check a enter number is Prime number or not using while & for loop
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int Input, i = 2;
    scanf("%d", &Input);
    while (i < Input)
    {
        if (Input % i == 0)
        {
            printf("Prime Number\n");
            break;
        }
        i++;
    }
    if (i == Input)
    {
        printf("Not Prime Number\n");
    }
    return 0;
}