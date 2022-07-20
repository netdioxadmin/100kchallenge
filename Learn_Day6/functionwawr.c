#include<stdio.h>
int main(){
 int a,b,res;
 printf("Enter 2 numbers \n");
 scanf("%d%d",&a,&b);
 res=sum(a,b);
printf("Result is %d", res);
return 0;
}

int sum(int num1, int num2){
int result;
result=num1+num2;
return result;
}