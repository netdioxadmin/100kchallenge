#include<stdio.h>
int main(){
    int a,b,swap;
    printf(" Enter 2 numbers");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping \n%d\n%d\n",a,b);
    swap = a;
    a=b;
    b=swap;
    printf("\n.............................\n");
    printf ("Swapping in Progress\n");
    sleep(5);
    printf ("Swapping success..... \n%d\n%d\n%d\n",a,b);
}