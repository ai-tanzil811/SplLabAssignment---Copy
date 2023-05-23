// C program to enter month number and print number of days in month.
// Ashraful Islam Tazil 0112230028
#include <stdio.h>
int main()
{
    int month;
    scanf("%d", &month);
    if (month == 1)
    {
        printf("January has 31 days\n");
    }
    else if (month == 2)
    {
        printf("February has 28 days\n");
    }
    else if (month == 3)
    {
        printf("March has 31 days\n");
    }
    else if (month == 4)
    {

        printf("April has 30 days\n");
    }
    else if (month == 5)
    {
        printf("May has 31 days\n");
    }
    else if (month == 6)
    {
        printf("June has 30 days\n");
    }
    else if (month == 7)
    {
        printf("July has 31 days\n");
    }
    else if (month == 8)
    {
        printf("August has 30 days\n");
    }
    else if (month == 9)
    {
        printf("Sepetember has 31 days\n");
    }
    else if (month == 10)
    {
        printf("Octobre has 30 days\n");
    }
    else if (month == 11)
    {
        printf("November has 31 days\n");
    }

    else if (month == 12)
    {
        printf("December has 30 days\n");
    }
    else
    {
        printf("Please enter proper month(1-12)");
    }
return 0;
}