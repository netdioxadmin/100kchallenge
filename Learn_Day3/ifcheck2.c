#include<stdio.h>

int main(){
int a = 0 , b = 0;
printf(" Enter 2 numbers \n");
scanf("%d%d",&a,&b);
if (a>b)
{
    printf(" The entered now %d is greater that %d \n", a,b);
    }else{
       printf(" The entered no %d is smaller that %d :\n", a,b); 
    }

return 0;
}