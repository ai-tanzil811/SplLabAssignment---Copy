// Declare a structure of students with three variables (name, id and cgpa). Now take the
// input of two students and print the information of that student who has the higher cgpa.
#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
};
int main()
{
    struct student s1,s2;
   fgets(s1.name,20,stdin);
   s1.name[strcspn(s1.name,"\n")]='\0';
    scanf("%d",&s1.id);
    scanf("%f",&s1.cgpa);
    getchar();
    fgets(s2.name,20,stdin);
    s2.name[strcspn(s2.name,"\n")]='\0';
    scanf("%d",&s2.id);
    scanf("%f",&s2.cgpa);
    if(s1.cgpa>s2.cgpa)
    {
        printf("The student with higher cgpa is %s\n",s1.name);
        printf("The id of the student is %d\n",s1.id);
        printf("The cgpa of the student is %.2f\n",s1.cgpa);
    }
    else
    {
        printf("The student with higher cgpa is %s\n",s2.name);
        printf("The id of the student is %d\n",s2.id);
        printf("The cgpa of the student is %.2f\n",s2.cgpa);
    }
    return 0;
}