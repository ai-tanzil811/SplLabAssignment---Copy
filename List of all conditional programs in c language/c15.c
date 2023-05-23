// C program to calculate the total marks, percentage and division of student.
//  Ashrarful Islam Tazil 0112230028
#include <stdio.h>
int main()
{
    int phy, chem, ict, total;
    float per;
    printf("Input marks for Math physics and Chemistry=\n");
    scanf("%d%d%d", &phy, &chem, &ict);
    total = phy + chem + ict;
    printf("Total marks=%d\n", total);
    per = total / 3.0;
    if (per >= 90 && per < 100)
    {
        printf("Grade is A\n");
    }
    else if (per >= 80 && per < 90)
    {
        printf("Grade A-");
    }
    else if (per >= 70 && per < 80)
    {
        printf("Grade B");
    }
    else if (per <= 70)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Data inputted wrong");
    }

    return 0;
}