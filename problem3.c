#include <stdio.h>
int main()
{
    float radius,diameter,circumference,area;
    printf("Enter the value of Radius:");
    scanf("%f",&radius);

    diameter = 2*radius;
    circumference = 2*3.1416*radius;
    area = 3.1416*(radius*radius);

    printf("The diameter is :%.2f\n",diameter);
    printf("The circumference is :%.2f\n",circumference);
    printf("The area is :%.2f\n",area);

}
