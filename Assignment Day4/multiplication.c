#include<stdio.h>
int main(){
int table=0,i,number;
printf(" Welcome to Multiplication Table Program..!!\n");
printf("Enter the no for multiplication table: \n");
scanf("%d",&table);
for ( i = 1; i <=10; i++)
{
    number = i*table;
    printf("%d X %d = %d\n",i,table,number);
}
return 0;
}