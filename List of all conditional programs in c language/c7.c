// C program to Inputeck number is positive, negative or zero.
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int numberInputeck(int Input)
{
    int output;
    output = (Input == 0) ? printf("Zero") : (Input % 2 == 0) ? printf("Even\n") : printf("ODD\n");
    return output;
}
int main()
{
    int x;
    scanf("%d", &x);
    numberInputeck(x);
    return 0;
}