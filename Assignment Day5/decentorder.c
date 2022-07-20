#include<stdio.h>
int main(){
    int limit, dec[100],i,j,temp;
    printf("Enter the Limit");
    scanf("%d",&limit);
    printf("Enter values of array\n");
    for ( i = 0; i < limit; i++){
       scanf("%d",&dec[i]);
    }
    for ( i = 0; i < limit-1; i++){
        for ( j = i+1; j < limit; j++){
            if (dec[i]<dec[j]){
                temp=dec[i];
                dec[i]=dec[j];
                dec[j]=temp;
            }
            
        }
        
        
    }
    printf("Sroted array \n");
    for ( i = 0; i < limit; i++){
        printf("%d\t",dec[i]);
    }
    

return 0;
}