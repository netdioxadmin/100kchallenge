#include<stdio.h>
int main(){
  int limit = 0,i,sum = 0;
  printf ("Enter the limit to find the sum of odd numbers:\n");
  scanf("%d",&limit);
  for ( i = 1; i <=limit; i++){
    if (i%2!=0)
    {
        sum = sum+i;
    }
    
  }
  printf("Sum of odd numbers = %d\n",sum);

return 0;
}