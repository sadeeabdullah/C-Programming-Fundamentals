#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);

    //swapping the value
    temp = a;
    a = b;
    b = temp;

    printf("Value of a: %d\n",a);
    printf("Value of a: %d\n",b);


}

