/*Accept a char input from the user and display it on the console
Char is working tried to input my name and could understand that array issue 
when Declaring Char. Fixed it with Declearing Char length*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    char name[10];
    printf("Enter your name \n Below 10 letters :  ");
    scanf("%s",name);
    printf("Your name is : %s\n",name);
    return 0 ;
}