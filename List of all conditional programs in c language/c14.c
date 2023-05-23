// C program to find the eligibility of admission for an engineering course based on the criteria.
// Ashrarful Islam Tazil 0112230028
#include <stdio.h>
int main()
{
    int marksPhysics, marksChemistry, marksMath;
    printf("Input marks for Math physics and Chemistry=");
    scanf("%d %d%d", &marksMath, &marksPhysics, &marksChemistry);
    if ((marksMath >= 65 && marksPhysics >= 55 && marksChemistry >= 50 && marksChemistry + marksMath + marksPhysics >= 180) || marksMath + marksPhysics >= 140)
        printf("Eligible\n");
    else
        printf("Not Eligible");
    return 0;
}