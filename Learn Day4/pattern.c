#include<stdio.h>
int main(){
    int i,j,rows;
    printf (" Enter the number of rows you want to get the pattern.\n");
    scanf("%d",&rows);
    for ( i = 1; i < rows; i++){
        for ( j = 0; j <= i; j++)
        {
            printf("* ");
            }
    printf("\n");
    }
    
return 0;
}