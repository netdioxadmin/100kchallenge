#include<stdio.h>
int main(){
    int limit, even[100],i,tmp,flag=0;
    printf(" Please Enter the limit: \n");
    scanf("%d",&limit);
    printf ("Enter the values of the array\n");
    for ( i = 0; i < limit; i++){
       scanf("%d",&even[i]);
    }
    printf( "The even numbers in array are:\n");
    for ( i = 0; i < limit; i++){
        if (even[i]%2==0){
            tmp=even[i];
            flag=flag+1;
            printf ("%d \n",even[i]);
        }
        
    }
    printf("Number of even numbers in the given array is: %d\n",flag);


return 0;
}