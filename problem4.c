#include <stdio.h>
int main()
{
    float C,F;
    printf("Enter the value of C:");
    scanf("%f",&C);

    F = (C*(9.0/5.0))+32;

    //displaying the value of F
    printf("The converted value is:%.2f\n",F);
}
