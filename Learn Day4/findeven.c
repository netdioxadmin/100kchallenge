#include<stdio.h>

int main(){
    int a=0, i=0;
    printf(" Welcome to Even Number finding Program. \n");
    printf("Enter a number \n");
    scanf("%d",&a);
    for ( i=2; i <=a; i++)
    {
        if (i%2==0)
        {
            printf("%d \t ",i);
            
        }
        
    }
    
    printf("\n");

return 0;
}