#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    int positive = 0;
    int negative = 0;
    int count = 0;
    float sum = 0;
    printf("Input the first number: ");
    scanf("%d", &a);
    printf("Input the second number: ");
    scanf("%d", &b);
    printf("Input the third number: ");
    scanf("%d", &c);
    printf("Input the fourth number: ");
    scanf("%d", &d);
    printf("Input the fifth number: ");
    scanf("%d", &e);
    if (a > 0)
    {
        positive++;
        count++;
        sum += a;
    }
    else
    {
        negative++;
    }
    if (b > 0)
    {
        positive++;
        count++;
        sum += b;
    }
    else
    {
        negative++;
    }
    if (c > 0)
    {
        positive++;
        count++;
        sum += c;
    }
    else
    {
        negative++;
    }
    if (d > 0)
    {
        positive++;
        count++;
        sum += d;
    }
    else
    {
        negative++;
    }
    if (e > 0)
    {
        positive++;
        count++;
        sum += e;
    }
    else
    {
        negative++;
    }
    float avg;
    avg=(float)sum/count;
    printf("Number of positive numbers: %d\n", positive);
    printf("Average value of the said positive numbers: %.2f\n", avg);
    return 0;
}