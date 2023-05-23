//  Function “IsPrime()” to determine whether a number is prime or not
//  Ashraful Islam Tanzil 0112230028
#include <stdio.h>
void IsPrime(int a);
int main()
{
    int input;
    scanf("%d", &input);
    IsPrime(input);
    return 0;
}
void IsPrime(int a)
{
    int c = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            c++;
    }
   (c==2)? printf("Prime\n") : printf("Not Prime\n");
}
