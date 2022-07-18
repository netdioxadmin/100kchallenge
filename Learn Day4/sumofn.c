#include<stdio.h>
int main (){
    int a =0, sum =0 ,i=0;
    printf("Enter a number \n");
    scanf("%d",&a);
    for (i = 1;i <=a; i++)
    {
        sum = sum+i;
    }
    printf(" The sum of numners %d",sum);

return 0;
}