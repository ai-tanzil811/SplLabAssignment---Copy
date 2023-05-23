#include <stdio.h>
#include <math.h>
int prime(int a)
{
    int count = 0;
    for (int i = a; i >=1; i--)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return 1;
    }
}

int palindrome (int a)
{
    int temp = a;
    int rev = 0;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == a)
    {
        return 1;
    }
}
int primePalindrome(int a)
{
    if(prime(a)==1&&palindrome(a)==1)
    {
        printf(" %d",a);
    }
}
int main()
{
    int x, y;
    printf("Input two numbers (separated by a space):\n");
    scanf("%d %d", &x, &y);
    printf("List of prime palindromes:\n");
    for (int i = x; i <= y; i++)
    {
        primePalindrome(i);
    }
    return 0;
}