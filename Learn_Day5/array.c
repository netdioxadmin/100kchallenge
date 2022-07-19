#include<stdio.h>
int main(){
int array[100];
int i,limit;
printf ("Enter Limit");
scanf("%d",&limit);
printf("Enter  Values:\n");
for (i = 0; i < limit; i++){
   scanf("%d",&array[i]);
}
printf("Entered vallues are");
for ( i = 0; i < limit; i++)
{
  printf(" %d \n",array[i]);
}

  return 0;
}