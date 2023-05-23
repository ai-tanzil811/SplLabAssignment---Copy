// C Program to convert celcius to farenheit
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int Celcius; 
    float Farenheight;
    scanf("%d", &Celcius);
    Farenheight = (float)(9 * Celcius) / 5 + 32;
    printf("%f\n", Farenheight);
    return 0;
} 