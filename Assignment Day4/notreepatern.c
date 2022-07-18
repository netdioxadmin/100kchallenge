#include<stdio.h>
int main(){
    int a,b, limit=0;
    printf("Enter the limit for the patern: \n");
    scanf("%d",&limit);
    for ( a = limit; a >=1  ; a--){
        for ( b = 1; b <=a; b++)
        {
           printf(" ");
        }for (int k = a; k <=limit ; k++)
        {
            printf("%d ",k);
        }
  printf("\n");
  }
    

return 0;
}