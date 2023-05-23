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
        for(int j=1;j<=i;j++)
        {
            printf("%c ",'A'+flag);
            if(j<=(i/2))
            {
                flag++;
            }
            else
            {
                flag--;
            }
        }
        flag=0;//eita dite vuila gele c er valo stored roiia jai
        printf("\n");
    }
    return 0;
}