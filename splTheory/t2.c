#include <stdio.h>
#include <math.h>
int main()
{
    int x = 3, y = 15, z = 10;
    float a, H;
    a = (y * y) - (4 * x * z);
    if (a == 0)
    {
        H = sqrt(x) / (float)(2 * x);
    }
    else if (a < 0)
    {
        H = z * sqrt(y) / (float)(2 * x);
    }
    else if (a > 0)
    {
        H = sin((float)x * y / 3.14 * z);
    }
    printf("H = %.2f", H);
    return 0;
}