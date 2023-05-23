// WAP that will take inputs of a n sized square matrix into a 2D array. Now show all the
// elements of its two diagonals. Reference: http://en.wikipedia.org/wiki/Main_diagonal
#include<stdio.h>
#define n 100
int main()
{
    int a;
    scanf("%d",&a);
    int b[n][n];
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf("\n\n");
     printf("Major Diagonal:");
     for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
           if (i==j ) printf("%d ",b[i][j]);
        }
    }
     printf("\nMinor Diagonal:");
      for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
           if (j==a-i-1 ) printf("%d ",b[i][j]);
        }
    }

    return 0;

}