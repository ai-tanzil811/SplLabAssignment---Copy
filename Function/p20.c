// Function “GenNthPrime()” to compute the N
// th prime number, where N is an integer input.
// Ashraful ISlam Tanzil 0112230028
#include <stdio.h>
void GenNthPrime(int a);
int IsPrime(int a);
int main()
{
    int input, z;
    scanf("%d", &input);
    printf("%dth prime is : ", input);
    GenNthPrime(input);
    return 0;
}
int IsPrime(int a)
{
    int c = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            c++;
    }
    if (c == 2)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

void GenNthPrime(int a)
{
    int flag = 0;
    for (int i = 2;; i++)
    {

        IsPrime(i);
        if (IsPrime(i) == 1)
        {
            flag++;
        }
        if (flag == a)
        {
            printf("%d", i);
            break;
        }
    }
}
