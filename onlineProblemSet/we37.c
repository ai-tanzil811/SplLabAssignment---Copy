#include<stdio.h>
int main()
{
    int x,y;
    printf("Input the Coordinate(x,y):\n");
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    if(x>0&&y>0)
    {
        printf("Quadrant-I(+,+)\n");
    }
    else if(x<0&&y>0)
    {
        printf("Quadrant-II(-,+)\n");
    }
    else if(x<0&&y<0)
    {
        printf("Quadrant-III(-,-)\n");
    }
    else if(x>0&&y<0)
    {
        printf("Quadrant-IV(+,-)\n");
    }
    else
    {
        printf("Origin(0,0)\n");
    }
    return 0;
}