#include <stdio.h>
void tanzil(int a, int b);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    tanzil(a, b);
    return 0;
}
void tanzil(int a, int b)
{
    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is less than %d", a, b);
    }
    else
    {
        printf("%d is equal to %d", a, b);
    }
}