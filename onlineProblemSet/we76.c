#include <stdio.h>
int main()
{
    printf("Input a seven digit number: ");
    int x;
    scanf("%d", &x);
    int x1 = x / 1000000;
    int x2 = (x / 100000) % 10;
    int x3 = (x / 10000) % 10;
    int x4 = (x / 1000) % 10;
    int x5 = (x / 100) % 10;
    int x6 = (x / 10) % 10;
    int x7 = x % 10;
    printf("%d %d %d %d %d %d %d\n", x1, x2, x3, x4, x5, x6, x7);
    return 0;
}