#include <stdio.h>
int main()
{
    float input;
    printf("Input the distance in cm: ");
    scanf("%f", &input);
    printf("Distance of %.2f cms is = %.2f inches\n", input, input / 2.54);
    return 0;
}