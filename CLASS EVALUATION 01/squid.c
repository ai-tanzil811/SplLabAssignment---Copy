include<stdio.h> int main()
{
    int i, n, rem, rev = 0;

    scanf("%d", &n);
    int temp = n;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        rev = rev * 10 + rem;
    }
    int tempRev = rev;
    n = temp;
    int odd = 0, even = 0, rem1, rem2;

    while (rev != 0)
    {
        rem1 = rev % 10;
        odd = odd * 10 + rem1;
        rev /= 10;
        rem2 = rev % 10;
        even = even * 10 + rem2;
        rev /= 10;
    }

    even = even / 10;

    int sum = 0, sq;

    while (odd != 0)
    {
        sq = odd % 10;
        sq = sq * sq;
        sum = sum + sq;
        odd /= 10;
    }

    int oddCheck, count = 0;

    while (even != 0)
    {
        oddCheck = even % 10;

        if (oddCheck % 2 != 0)
        {
            count++;
        }

        even /= 10;
    }

    rev = tempRev;

    if (n == rev)
    {
        if (sum % 4 == 0)
        {
            if (count == 0)
            {
                printf("Squid\n");
            }
        }
    }
    else
    {
        printf("Not Squid\n");
    }
    return 0;
}