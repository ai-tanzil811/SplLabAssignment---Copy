#include<stdio.h>
int main()
{
    float cgpa[100],sum=0,avg;
    int i,n,high=0,low=0;
    int highest,lowest;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the CGPA of student %d: ",i+1);
        scanf("%f",&cgpa[i]);
        sum+=cgpa[i];
    }
    avg=sum/n;
    printf("The average CGPA of the students is: %.2f\n",avg);
    for(i=0;i<n;i++)
    {
        if(cgpa[i]>3.00)
        {
            if(cgpa[i]>high)
            {
                high=cgpa[i];
            }
            if(cgpa[i]<low)
            {
                low=cgpa[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(cgpa[i]==high)
        {
            highest=i+1;
        }
        if(cgpa[i]==low)
        {
            lowest=i+1;
        }
    }
    printf("The number of student with highest CGPA is: %d\n",highest);
    printf("The highest CGPA is: %d\n",high);
    printf("The lowest CGPA is: %d\n",low);
    return 0;
}   