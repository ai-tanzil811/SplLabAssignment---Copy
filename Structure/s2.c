// Declare a structure of students with three member variables (name, id and cgpa), where name is a
// string and id are strings, and cgpa is a float value with default values.
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
    p1.name = "Tanzil";
    p1.id = 191;
    p1.cgpa = 3.5;
    printf("Name = %s \n", p1.name);
    printf("\nid=%d\n", p1.id);
    printf("Cg : %.2f", p1.cgpa);
    return 0;
}