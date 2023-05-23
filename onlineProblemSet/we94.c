#include <stdio.h>
#include <math.h>
int main()
{
    float w, h;
    printf("Input the weight: ");
    scanf("%f", &w);
    printf("Input the height: ");
    scanf("%f", &h);
    float bmi = w / pow(h, 2);
    printf("BMI = %.6f\n", bmi);
    if (bmi < 18.5)
    {
        printf("Grade: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf("Grade: Normal\n");
    }
    else if (bmi >= 25 && bmi < 30)
    {
        printf("Grade: Overweight\n");
    }
    else if (bmi >= 30)
    {
        printf("Grade: Obese\n");
    }
    return 0;
}