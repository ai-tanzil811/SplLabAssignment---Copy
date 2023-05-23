#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
    char category;
    int years_of_work_experience, number_of_family_members;
    float total_family_income_per_month;
    scanf("%c", &category);
    toupper(category;)
    getc();
    scanf("%d", &years_of_work_experience);
    scanf("%d", &number_of_family_members);
    scanf("%f", &total_family_income_per_month);
    if (category == 'X')
    {
        if (years_of_work_experience >= 12 && number_of_family_members > 5 || total_family_income_per_month < 1000.50)
        {
            printf("You are eligible for the bonus");
        }
        else
        {
            printf("You are not eligible for the bonus");
        }
    }
    else if (category == 'Y' || category == 'Z')
    {
        if (number_of_family_members > 8 && total_family_income_per_month < 1100.78)
        {
            printf("You are eligible for the bonus");
        }
        else
        {
            printf("You are not eligible for the bonus");
        }
    }
    else
    {
        printf("Invalid category");
    }
    return 0;
}