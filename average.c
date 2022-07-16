#include<stdio.h>

int main (){
    int a, b , c;
    float avg;
    printf (" Enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    avg = (a+b+c)/3;
    printf ("The average of %d ,%d and %d is %f", a,b,c,avg);

}