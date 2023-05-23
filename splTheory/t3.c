#include <stdio.h>
#include <math.h>
int main()
{
    float a = 5.5, b = 1.5, c = 8.7, s, A, P;
    s = (a + b + c) / 2;
    A = sqrt(s * (s - a) * (s - b) * (s - c));
    P = 2 * s;
    printf("Area = %.2f\n", A);
    printf("Perimeter = %.2f", P);
    return 0;
}