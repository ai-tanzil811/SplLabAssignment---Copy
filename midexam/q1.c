//0112230028 Ashraful Islam TAnzil
#include<stdio.h>
int main()

{

    float a[2][2];
    int l[2][2];
    for(int i =0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
   a[0][0] == a[1][1];
    a[1][1]==a[0][0];
    //inverse
    // for(int i =0;i<2;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {

    //         scanf("%d",&a[i][j]);
    //     }
    // }
    float sum;
    int temp;
    sum= 1/(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
    for(int i =0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
             l[i][j]=sum*a[i][j];         ;
        }
       
    }
    for(int i =0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
             printf("%.2f ",l[i][j]);      ;
        }
        printf("\n");
       
    }
    return 0;
}
