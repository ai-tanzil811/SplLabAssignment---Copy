// C program to check whether a triangle can be formed by the given value for the angles.
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int angle1, angle2, angle3;
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    if (angle1 <= 180 && angle1 > 0)
    {
        if (angle2 <= 180 && angle2 > 0)

        {
            if (angle3 <= 180 && angle3 > 0)
            {
                if (angle1 + angle2 + angle3 == 180)
                {
                    printf("Triangle can be formed");
                }
                else
                {
                    printf("Triangle can not be formed");
                }
            }
        }
    }

    else
    {
        printf("Triangle can not be formed");
    }
    return 0;
}