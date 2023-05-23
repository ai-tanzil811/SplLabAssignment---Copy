#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i=1;
    while(i<=n)
    {
        int a,hw,ct,mt,tf;
        scanf("%d %d %d %d %d", &a, &hw, &ct, &mt, &tf);
        double total=(a*5)/100.0+(hw*10)/100.0+(ct*15)/100.0+(mt*30)/100.0+(tf*40)/100.0;
        if(total>=90)
        {
            printf("Student %d: A\n", i);
        }
        else if(total>=86)
        {
            printf("Student %d: A-\n", i);
        }
        else if(total>=82)
        {
            printf("Student %d: B+\n", i);
        }
        else if(total>=78)
        {
            printf("Student %d: B\n", i);
        }
        else if(total>=74)
        {
            printf("Student %d: B-\n", i);
        }
        else if(total>=70)
        {
            printf("Student %d: C+\n", i);
        }
        else if(total>=66)
        {
            printf("Student %d: C\n", i);
        }
        else if(total>=62)
        {
            printf("Student %d: C-\n", i);
        }
        else if(total>=58)
        {
            printf("Student %d: D+\n", i);
        }
        else if(total>=55)
        {
            printf("Student %d: D\n", i);
        }
        else
        {
            printf("Student %d: F\n", i);
        }
        i++;
    }
    return 0;
}