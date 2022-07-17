#include<stdio.h>

int main (){

    int a=0,b=0,choice=0,result=0;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf ("Welcome to Mini Calculator\n");
    printf("Choose 1: for Addition\n Choose 2 for Substraction \n Choose 3 for Multiplication \n Choose 4 for Divition\n ");
    printf("Enter your Choice\n");
    scanf("%d",&choice);
    if (choice == 1){
        result = a+b;
        printf("Result is %d",result);
    }else if (choice == 2){
        result = a-b;
        printf("Result is %d",result);
    }else if (choice == 3){
        result = a*b;
        printf("Result is %d",result);
    }else if (choice == 4){
        result = a/b;
        printf("Result is %d",result);
    }else{
        printf("Hey..!! Are you a fool..?\n");
    }

   /* printf("Result is %d",result);*/
   
    return 0;
}