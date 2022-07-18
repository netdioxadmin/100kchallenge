#include<stdio.h>
int main(){
int n = 0,i,flag = 0;
printf("Please enter a number: \n");
scanf("%d",&n);
for ( i = 2; i < n/2; i++)
{
    if (n%i==0){
        flag=1;
        break;
    }
    
}
if (flag==0){
printf("%d is a prime number\n\n",n);
}else{
printf("%d is a non prime number\n \n",n);
}

return 0;
}