#include<stdio.h>
void sum(int,int);
int main (){
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    sum(a,b);

}

void sum(int num1, int num2){
    int result;
    result= num1+num2;
    printf("Resulet is %d \n",result);
}