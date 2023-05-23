#include <stdio.h>
int main()
{
    for(int i=1;i<=51;i+=5)
    {
        for(int j=100;j>=0;j-=10)
        {
            printf("a=%d\tb=%d\n",i,j*100-i);
        }
    }
    return 0;
}