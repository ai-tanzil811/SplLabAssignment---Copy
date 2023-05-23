//vowel
#include<stdio.h>
int main()
{
   char tan[100];
   gets(tan);
   int count=0;
   for(int i=0;tan[i]!='\0';i++)
   {
    if(tan[i]=='a'||tan[i]=='A'||tan[i]=='E'||tan[i]=='e'||tan[i]=='I'||tan[i]=='i'||tan[i]=='O'||tan[i]=='o'||tan[i]=='U'||tan[i]=='u')
    {
        count++;
    }
   }
   printf("%d",count);
   return 0;
}