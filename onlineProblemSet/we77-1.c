#include <stdio.h>
int main()
{
    printf("Input loan principal_amt (0 to quit): ");
    double principal_amt;
    scanf("%lf", &principal_amt);
    if (principal_amt == 0)
    {
        return 0;
    }
    printf("Input interest rate: ");
    double rate;
    scanf("%lf", &rate);
    printf("Input term of the loan in days: ");
    int days;
    scanf("%d", &days);
    double interest = principal_amt * rate * days / 365;
    printf("The interest amount is $%.2lf\n", interest);
    return 0;
}