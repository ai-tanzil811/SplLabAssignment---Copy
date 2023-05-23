//  Function “GeneratePrime()” to compute the prime numbers less than N, where N is an input
// integer. GeneratePrime() uses IsPrime() to check whether a number is prime or not.
// Ashraful islam Tanzil 0112230028
#include <stdio.h>
int IsPrime(int a);
int genaratePrime(int a);
int main()
{
    int input;
    scanf("%d", &input);
    printf("Prime less than %d: ",input);
    genaratePrime(input);
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

int genaratePrime(int a)
{
    for (int i = 2; i < a; i++)
    {
        IsPrime(i);
        if (IsPrime(i) == 1)
        {
            printf("%d ", i);
            if(i<a) printf(",");
        }
    }
}