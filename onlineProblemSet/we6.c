#include <stdio.h>
#define pi 3.1416
int main()
{
    int a;
    scanf("%d", &a);
    int perimeter = 2 * pi * a;
    int area = pi * a * a;
    printf("The perimeter of the circle is %d\n", perimeter);
    printf("The area of the circle is %d\n", area);
    return 0;
}
