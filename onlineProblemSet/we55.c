#include <stdio.h>//anisul sir video 55
int main()
{
    int x, y;
    printf("Input value for x & y:\n");
    scanf("%d%d", &x, &y);
    printf("Before swapping the value of x & y: %d %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping the value of x & y: %d %d\n", x, y);
    return 0;
}