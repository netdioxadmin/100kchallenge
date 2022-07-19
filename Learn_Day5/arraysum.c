#include<stdio.h>
int main (){
int sum[100],limit,i,add = 0;
printf("Enter Limit");
scanf("%d",&limit);
for ( i = 0; i < limit; i++){
    scanf("%d",&sum[i]);
}for ( i = 0; i < limit; i++){
   add = add+sum[i];
}

printf ("Result = %d \n",add);

return 0;
}