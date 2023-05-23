#include <stdio.h>
int main()
{
    int a, b;
    float div;
    scanf("%d", &a);
    scanf("%d", &b);
    if (b == 0)
        printf("Division not possible..!");
    else
    {
        div = (float)a / b;
        printf("%.2f", div);
    }
    return 0;
}