#include<stdio.h>
int main()
{

    int c,a[100];
    scanf("%d",&c);
    for(int i=0;i<c;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("\n");
    for(int i=0;i<c;i++)
    {
        printf(" %d ",a[i]);

    }
    printf("\n-----------------AFTER SORT-------------------\n");
    for(int i=0;i<c;i++)
        for(int j=i+1;j<c;j++)
        if(a[i]>a[j])
            swap(a[i],a[j]);

for(int i=0;i<c;i++)
    {
        printf(" %d ",a[i]);

    }
    return 0;
}
