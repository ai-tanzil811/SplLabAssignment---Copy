// Program that will take three integer numbers from keyboard but assign only the first and
// last inputs to variables and skip any assignment of the middle one.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The first number is %d and the last number is %d", a, c);
    return 0;
}