//C Program to convert farenheit to celcius
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    float Celcius; 
    float Farenheight;
    scanf("%f",&Farenheight);
    Celcius=(float)((Farenheight-32)/9)*5;
    printf("%f\n",Celcius);
    return 0;
} 