/*Write a program to find the simple interest.
  Program should accept 3 inputs from the user and calculate simple interest for the given inputs. Formula: SI=(P*R*n)/100)*/
#include <stdio.h>
#include<stdlib.h>

int main (){

int P = 0;
float R=0, n=0, SI=0;
printf(" Welcome to Simple Intrest Calculator \n");
printf( "Enter the Principal Amount :\n");
scanf("%d",&P);
printf(" Enter the rate of Intrest : \n ");
scanf("%f",&R);
printf(" Enter the no of Years for which intrest to be calculated : \n ");
scanf("%f",&n);

SI = (P*R*n)/100;

printf("The calculated intrest is below : %f \n",SI);

return 0;

}