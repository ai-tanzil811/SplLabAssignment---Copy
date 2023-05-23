#include <stdio.h>
int main()
{
    int weeks = 2, days_in_week = 7, i = 1; //(1)
    do                                      // (2)
    {
        int j = 1; //(3)
        printf("Week: %d\n", i);
        do //(2)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    printf(" Day: %d\n", j);
            }
            else
            {
                if (j % 2 != 0)
                    printf(" Day: %d\n", j);
            }
            j++;                     //(3)
        } while (j <= days_in_week); //(4)
        printf("\n");
        i++;              //(1)
    } while (i <= weeks); //(4)
    return 0;
}
