#include <stdio.h>
int main()
{
    int num, i;
    printf("Input an integer number: ");
    scanf("%d", &num);
    printf("\nNext 10 consecutive odd numbers:\n");
    for (i = num + 1; i <= num + 20; i++)
    {
        if (i % 2 != 0)
            printf("%d, ", i);
    }
    printf("\n\nNext 10 consecutive even numbers:\n");
    for (i = num + 1; i <= num + 20; i++)
    {
        if (i % 2 == 0)
            printf("%d, ", i);
    }
    return 0;
}