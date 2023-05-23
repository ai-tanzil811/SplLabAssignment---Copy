#include<stdio.h>
int main()
{
    int limit;
    scanf("%d",&limit);
    int row;
    int col;
    int col1;
    int space;
    // for(space=i;space<=limit;space++)
   for(row=1;row<=limit;row++)
    {
        for(space=row;space<=limit;space++)
        {
            printf(" ");
        }
        for(col1=1;col1<=row;col1++)
        {
            printf("* ");
        }
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        for(col1=row;col1<=limit;col1++)
        {
            printf("* ");
        }
        for(space=row;space<=limit;space++)
        {
            printf(" ");
        }
        for(col1=1;col1<=row;col1++)
        {
            printf("* ");
        }
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        for(col1=row;col1<=limit;col1++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(row=2;row<=limit;row++)
    {
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        for(col1=row;col1<=limit;col1++)
        {
            printf("* ");
        }
         for(space=row;space<=limit;space++)
        {
            printf(" ");
        }
        for(col1=1;col1<=row;col1++)
        {
            printf("* ");
        }
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        for(col1=row;col1<=limit;col1++)
        {
            printf("* ");
        }
         for(space=row;space<=limit;space++)
        {
            printf(" ");
        }
        for(col1=1;col1<=row;col1++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(row=1;row<=limit;row++)
    {
        for(space=row;space<=limit;space++)
        {
            printf(" ");
        }
        for(col1=1;col1<=row;col1++)
        {
            printf("* ");
        }
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        for(col1=row;col1<=limit;col1++)
        {
            printf("* ");
        }
        for(space=row;space<=limit;space++)
        {
            printf(" ");
        }
        for(col1=1;col1<=row;col1++)
        {
            printf("* ");
        }
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        for(col1=row;col1<=limit;col1++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(row=2;row<=limit;row++)
    {
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        for(col1=row;col1<=limit;col1++)
        {
            printf("* ");
        }
         for(space=row;space<=limit;space++)
        {
            printf(" ");
        }
        for(col1=1;col1<=row;col1++)
        {
            printf("* ");
        }
        for(space=1;space<=row;space++)
        {
            printf(" ");
        }
        for(col1=row;col1<=limit;col1++)
        {
            printf("* ");
        }
         for(space=row;space<=limit;space++)
        {
            printf(" ");
        }
        for(col1=1;col1<=row;col1++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}