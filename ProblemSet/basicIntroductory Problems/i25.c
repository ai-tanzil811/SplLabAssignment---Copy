#include <stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    printf("(a) Val: %10.6f\n", a);
    printf("(b) Val: %2.6f\n", a);
    printf("(c) Val: %.2f\n", a);
    printf("(d) Val: %d\n", (int)a);
    printf("(e) Val: %e\n", a);
    return 0;
}