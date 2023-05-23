// Given a structure student, which has three member variables (name, id and cgpa), declare a variable
// of structure student.
#include <stdio.h>
struct student
{
    char name[40];
    int id;
    float cgpa;
};
int main()
{
    struct student p1;
    printf("Eneter name :");
    fgets(p1.name, sizeof(p1.name), stdin);
    p1.name[strcspn(p1.name, "\n")] = '\0';
    printf("\nenter id : ");
    scanf("%d", &p1.id);
    printf("Enter cgpa");
    scanf("%f", &p1.cgpa);
    printf("Name = %s \n", p1.name);
    printf("\nid=%d\n", p1.id);
    printf("Cg : %.2f", p1.cgpa);
    return 0;
}