// //Program that will take three integer numbers from keyboard but assign only the first and
// last inputs to variables and skip any assignment of the middle one.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %*d %d", &a, &c);
    printf("a = %d, c = %d\n", a, c);
    return 0;
}