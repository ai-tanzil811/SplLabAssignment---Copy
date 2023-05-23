// 0112230028 Ashraful Islam TAnzil
#include <stdio.h>
#define n 100
int main()


{
    int s, k;
    int a[n];
    int c=0;
    scanf("%d  %d", &s, &k);
    for (int i = s; i <= k; i++)
    {
        int temp = i;
        int temp2 = i;

        int digit;
        int firstdigit;
        int lastdigit = temp % 10;
        // first digit
        while (temp2 != 0)
        {
            digit = temp2 % 10;
            firstdigit = digit;
            temp2 /= 10;
        }
        int temp3, odd, sum = 0;
        temp3 = i;
        while (temp3 != 0)
        {
            odd = temp3 % 10;
            if (odd % 2 != 0)
            sum = sum + odd * odd;
            temp3 /= 10;
        }
        if (firstdigit == 1 && lastdigit == 2 && sum % 3 == 0)
        {

        printf("%d ",i);
        }



    }


    return 0;
}
