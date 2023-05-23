#include <stdio.h>
#include <string.h>
typedef struct person
{
    char name[40];
    int id;
    float cgpa;

} tanzil;
int main()
{
    tanzil p1, p2;
    fgets(p1.name, sizeof(p1.name), stdin);
    p1.name[strcspn(p1.name, "\n")] = '\0';
    scanf("%d", &p1.id);
    scanf("%f", &p1.cgpa);
    getchar();
    fgets(p2.name, sizeof(p2.name), stdin);
    p2.name[strcspn(p2.name, "\n")] = '\0';
    scanf("%d", &p2.id);
    scanf("%f", &p2.cgpa);
    printf("%s", p1.name);
    printf("\n%d\n", p1.id);
    printf("%.2f", p1.cgpa);
    printf("\n%s", p2.name);
    printf("\n%d\n", p2.id);
    printf("%.2f", p2.cgpa);
    return 0;
}
