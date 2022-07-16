/*Accept two inputs from the user and output its sum
We need to scan f the flat variable in different line as the single line Declaration in to taking */
#include<stdio.h>

int main()
{
    int a;
    float b = 0,sum = 0;
    printf(" Enter two Numbers :");
    scanf("%d",&a);
    scanf("%f",&b);
    sum = a + b;
    printf ("The sum of the numbers %d and %f is %f\n",a,b,sum);

    return 0;
}
