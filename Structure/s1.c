// Declare a structure of students with three member variables (name, id and cgpa), where name is a
// string and id are strings, and cgpa is a float value.
#include<stdio.h>
#include<string.h>
typedef struct person
{
   char name[40];
   int id;
   float cgpa;

} tanzil;
int main()
{
    tanzil p1;
    printf("Eneter name :");
    fgets(p1.name,sizeof(p1.name),stdin);
    p1.name[strcspn(p1.name,"\n")]='\0';ASsh
    printf("\nenter id : ");
    scanf("%d",&p1.id);
    printf("Enter cgpa");
    scanf("%f",&p1.cgpa);
    printf("Name = %s \n",p1.name);
    printf("\nid=%d\n",p1.id);
    printf("Cg : %.2f",p1.cgpa);
    return 0;
}