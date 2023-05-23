#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    int count = 0;
    printf("Input each number on a separate line (888 to exit):\n");
    while (1)
    {
        scanf("%d", &num);
        if (num == 888)
        {
            break;
        }
        sum += num;
        count++;
    }
    printf("The average value of the said numbers is %.6lf\n", (double)sum / count);
    return 0;
}