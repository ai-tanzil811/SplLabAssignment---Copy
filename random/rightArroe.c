#include<stdio.h>  
int main() {  
    
  int width,i,j,k;  
  printf("Enter the width of arrow: ");  
  scanf("%d",&width);  
for(int i =1;i<=width;i++)
{
    for(int space=i;space<=width;space++)
    {
        printf("  ");
    }
    for(k=i;k<=width;k++)
    {
        printf("* ");
    }
 
    printf("\n");

}
for(int i =1;i<=width;i++)
{
       for(int space=2;space<=i;space++)
    {
        printf("  ");
    }
     for(k=1;k<=i;k++)
    {
        printf("* ");
    }
    printf("\n");
}

return 0;
}