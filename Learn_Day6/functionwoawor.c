#include<stdio.h>
/*Declearing the function */
void sum();
int main (){
/* Calling the sum function */    
sum();

 return 0;   
}
/*Making the function with out argument and with out Return Value*/
void sum(){
    int num1,num2,sum;
    printf ("Enter 2 numbers \n");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("Resut is %d \n",sum);
}