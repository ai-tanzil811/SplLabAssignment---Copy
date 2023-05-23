// C program to Inputeck leap year using conditional Operator.
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
void leapYear(int Input)
{
    else if (Input % 400 == 0 || Input % 4 == 0 && Input % 100 != 0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Leap year\n");
    }
}
int main()
{
    int y;
    scanf("%d", &y);
    leapYear(y);
    return 0;
}