#include<stdio.h>
int main(){
    int a =0;
    printf("Welcome to Mark Checking Program \n");
    printf("Please enter you Total Marks out of 100.\n");
    scanf("%d",&a);
    if (a>50){
        printf("Congratulations you have Passed the Exam.\n");
    }else{
        printf("Sorry, You have failed, Please try again.");
    }
    
return 0;
}