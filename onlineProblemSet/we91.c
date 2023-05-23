#include <stdio.h>
int main()
{
    int h, m;
    printf("Input hour(h) and minute(m) (separated by a space):\n");
    scanf("%d %d", &h, &m);
    if (h == 12)
    {
        h = 0;
    }
    float angle = (float)abs(30 * h - 5.5 * m);
    if (angle > 180)
    {
        angle = 360 - angle;
    }
    printf("At %d:%d the angle is %.1f degrees.\n", h, m, angle);
    return 0;
}