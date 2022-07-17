#include<stdio.h>
int main(){
    float a = 0;
    printf("Welcome to Grade Checking Program\n");
    printf("Please enter your mark in Percentage. \n");
    scanf("%f",&a);
    if (a>100){
       printf("Sorry You have entered Wrong Percentage.\n");
    }else if (a>=90){
       printf("Your grade is :: A :: \n");
    }else if (a>=80){
        printf("Your grade is :: B :: \n");
    }else if (a>=70){
        printf("Your grade is :: C :: \n");
    }else if (a>=60){
        printf("Your grade is :: D :: \n");
    }else if (a>=50){
        printf("Your grade is :: E :: \n");
    }else if (a<50){
        printf("Your grade is :: Failed :: \n");
    }
 return 0;
}