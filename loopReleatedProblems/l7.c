#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d %d", &x, &n);
    int k;
    for(int i=1;i<=n;i++)
    {
        scanf("%d", &k);
        if(k==x)
        {
            printf("Right, Player-2 wins!");
            return 0;
        }
        else
        {
            printf("Wrong, %d Choice(s) Left!\n", n-i);
        }
    }
    printf("Player-1 wins!");
    return 0;
}
