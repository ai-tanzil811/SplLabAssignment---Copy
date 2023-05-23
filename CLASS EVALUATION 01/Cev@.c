#include <stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    if (score > 90 && score <= 100)
    {
        printf("A\n");
    }
    else if (score > 86)
    {
        printf("A-\n");
    }
    else if (score > 82)
    {
        printf("b+\n");
    }
    else if (score > 78)
    {
        printf("B\n");
    }
    else if (score > 74)
    {
        printf("B-\n");
    }
    else if (score >= 70)
    {
        printf("C+\n");
    }
    else if (score >= 66)
    {
        printf("C\n");
    }
    else if (score >= 62)
    {
        printf("C-\n");
    }
    else if (score >= 58)
    {
        printf("D+\n");
    }
    else if (score >= 55)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
    return 0;
}