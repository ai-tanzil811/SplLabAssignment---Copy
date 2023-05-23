#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 180 && a > 0 && b > 0 && c > 0)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
    return 0;
}