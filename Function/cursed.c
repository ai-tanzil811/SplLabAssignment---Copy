#include <stdio.h>
#include <math.h>
int Tanzil(int a);
int tanzil2(int a);

int Tanzil(int a)
{
    int temp = a, dig, first_digit;
    int last_digit = a % 10;
    while (temp != 0)
    {
        dig = temp % 10;
        temp = temp / 10;
        if (temp == 0)
            first_digit = dig;
    }
    if (first_digit == 7 || first_digit == 1 && last_digit != 9 || last_digit != 2)
        return 1;
    else
        return -1;
}
int tanzil2(int a)
{
    int temp = a, rev[100], i = 0;
    while (temp != 0)
    {
        int dig = temp % 10;
        temp /= 10;
        rev[i] = dig;
        i++;
    }
    int arr[50], j, k = 0;
    for (j = i; j >= 0; j--)
    {
        arr[j] = rev[k];
        k++;
    }
    int even = 1;
    int odd = 1;
    for (int p = 0; p <= i; p++)
    {
        if (p % 2 == 0)
        {
            if (arr[p] % 2 != 0)
            {
                even = 0;
                break;
            }
        }
        else
        {
            if (arr[p] % 2 == 0)
            {
                odd = 0;
                break;
            }
        }
    }
    if (odd == 1 && even == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int tanzil3(int a)
{
    int strongChecker(int a);
    {
        int temp = a, dig, fact = 1;
        int sum = 0;

        while (temp != 0)
        {
            dig = temp % 10;
            temp = temp / 10;
            for (int i = 1; i <= dig; i++)
            {
                fact *= i;
            }
            sum += fact;
        }
        if (sum == a)
            return 1;
        else
            return -1;
    }
    int defectiveChecker(int a);
    {
        int sum = 0;

        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                sum += i;
            }
        }
        if (sum < (2 * a))
            return 1;
        else
            return -1;
    }

    if (strongChecker(a) == 1 && defectiveChecker(a) == -1)
        return 1;
    else
        return -1;
}
int tanzil4(int a)
{
    int sum = 0, dig, temp = a;
    while (temp != 0)
    {
        dig = temp % 10;
        temp = temp / 10;
        sum = sum + (dig * dig);
    }
    if (a > 9 && sum % 7 == 0)
        return 1;
    else
        return -1;
}
int sectumSempra(int a)
{
    if (Tanzil(a) == 1 && tanzil2(a) == 1 && tanzil3(a) == 1 && tanzil4(a) == 1)
        return 1;
    else
        return -1;
}

int main()
{
    int input1, input2, cursed_number;
    scanf("%d%d", &input1, &input2);
    for (int i = input1; i <= input2; i++)
    {
        cursed_number = sectumSempra(i);
        if (sectumSempra(i) == 1)

            printf("%d ", cursed_number);
    }
    return 0;
}
