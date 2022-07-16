#include<stdio.h>

int main(){
   int num;
   printf(" Enter a number \n");
   scanf("%d",&num);
     if (num<0)
    {   
        printf(" The entered no %d Negative: \n", num );
        }else{
        printf("Entered no %d is Possitive :", num);
    }
   
   
return 0;
}