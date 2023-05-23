// 109. Write a C program to find and print the square of each even and odd value between 1 and a given number (4 < n < 101). Go to the editor
// Sample Output:
// Input a number(integer): 15

// Square of each even between 1 and 15:
// 2^2 = 4
// 4^2 = 16
// 6^2 = 36
// 8^2 = 64
// 10^2 = 100
// 12^2 = 144
// 14^2 = 196

#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    printf("Input a number(integer): ");
    scanf("%d", &n);
    printf("\nSquare of each even between 1 and %d:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d^2 = %d\n", i, i * i);
    }
    printf("\nSquare of each odd between 1 and %d:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            printf("%d^2 = %d\n", i, i * i);
    }
    return 0;
}