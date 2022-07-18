#include<stdio.h>
int main(){
    int a=0,b=0, limit=0;
    printf("Enter the limit for the patern: \n");
    scanf("%d",&limit);
    for ( a = 1; a <=limit; a++){
        for ( b = 1; b <=a; b++)
        {
           printf("  %d",b);
        }
        printf("\n");
    }
    

return 0;
}