#include<stdio.h>

int main(){
    int size,i,j;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    printf("%d\n",size);
    int array1[size][size],array2[size][size],sum[size][size];
    printf("Enter values of array1 \n");
    for ( i = 0; i < size; i++){
        for ( j = 0; j < size; j++){
           scanf("%d",&array1[i][j]);
            
        }
       
    }
    printf("Enter vaues of array2");
    for ( i = 0; i < size; i++){
        for ( j = 0; j < size; j++){
            scanf("%d",&array2[i][j]);
        }
        
    }
    
    for ( i = 0; i < size; i++){
       for ( j = 0; j < size; j++){
        sum[i][j]=array1[i][j]+array2[i][j];
       }
       
    }

   printf("sum of array1 and array2\n");
    for ( i = 0; i < size; i++){
        for ( j = 0; j < size; j++){
         printf("%d \t ",sum[i][j]);  
        }
        printf("\n");
    }
    
    
return 0;
}
