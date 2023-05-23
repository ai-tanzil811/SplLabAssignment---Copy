#include <stdio.h>
int main()
{
    int num;
    printf("Decimal\tRoman\n");
    printf("number\tnumeral\n");
    printf("-------------------\n");
    for (int i = 1; i <= 50; i++)
    {
        num = i;
        printf("%d\t", num);
        while (num != 0)
        {
            if (num >= 100)
            {
                printf("C");
                num -= 100;
            }
            else if (num >= 90)
            {
                printf("XC");
                num -= 90;
            }
            else if (num >= 50)
            {
                printf("L");
                num -= 50;
            }
            else if (num >= 40)
            {
                printf("XL");
                num -= 40;
            }
            else if (num >= 10)
            {
                printf("X");
                num -= 10;
            }
            else if (num >= 9)
            {
                printf("IX");
                num -= 9;
            }
            else if (num >= 5)
            {
                printf("V");
                num -= 5;
            }
            else if (num >= 4)
            {
                printf("IV");
                num -= 4;
            }
            else if (num >= 1)
            {
                printf("I");
                num -= 1;
            }
        }
        printf("\n");
    }
    return 0;
}