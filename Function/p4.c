#include <stdio.h>
void tanzil(int a);

int main()
{
    int a;
    scanf("%d", &a);
    tanzil(a);
    return 0;
}
void tanzil(int a)
{
    if (a > 0)
    {
        printf("Positive");
    }
    else if (a < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
}