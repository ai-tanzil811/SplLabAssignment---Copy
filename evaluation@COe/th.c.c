// 0112230028 Ashraful Islam Tanzil
#include <stdio.h>
int multiverseChooser(int a);
int CheckerFunc1(int a);
int CheckerFunc2(int a);
int palindromeChecker(int a);
int factorial(int a);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (multiverseChooser(i) == 1)
            printf("%d\t", i);
    }

    return 0;
}
int factorial(int a)
{
    int sum = 1;
    for (int i = a; i > 0; i--)
        sum *= i;
    return sum;
}
int CheckerFunc1(int a)
{
    int temp = a;
    int dig;
    int c = 0;
    int sum = 0;
    while (temp!= 0)
    {
        dig = temp % 10;
        c++;
        sum += factorial(dig);
        temp /= 10;
    }
    if (c >= 5 && sum % 11 == 0)
        return 1;
    else
        return -1;
}
int CheckerFunc2(int a)
{
    int dig;
    int rev = 0;
    int temp = a;
    while (temp != 0)
    {
        dig = temp % 10;
        rev = rev * 10 + dig;
        temp /= 10;
    }
    int z = palindromeChecker(rev);
    if (z == 1)
        return -1;
    else
        return 1;
}
int palindromeChecker(int a)
{
    int dig;
    int rev = 0;
    int temp = a;
    while (temp != 0)
    {
        dig = temp % 10;
        rev = rev * 10 + dig;
        temp /= 10;
    }
    if (rev == a)
        return 1;
    else
        return -1;
}
int multiverseChooser(int a)
{
    if (CheckerFunc1(a) == 1 && CheckerFunc2(a) == 1)
        return 1;
    else
        return -1;
}