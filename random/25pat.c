#include<stdio.h>
#include<ctype.h>
int main()
{
    int limit;
    scanf("%d",&limit);
    int flag;
    flag=0;
    for(int i=1;i<=limit;i++)
    {
        for(int j=1;j<=i+2;j++)// Troubling code
        {
            printf("%d",j);
        }
         for(int j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        flag=0;//eita dite vuila gele c er value stored roiia jai
        printf("\n");
    }
    return 0;
}
//test 0 failed
//test 1 failed
//test 2 failed
//test 3 failed
//test 4 failed
//test 5 failed
// printf("%d",i+flag);
//             if(j<=(i/2))
//             {
//                 flag++;
//             }
//             else
//             {
//                 flag--;
//             }