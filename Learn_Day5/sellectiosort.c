#include<stdio.h>
void main (){
    int limit, i, value[100],j,temp;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    printf("Enter Values: \n");
    for ( i = 0; i < limit; i++){
        scanf("%d",&value[i]);
    }
    for ( i=0; i<limit-1; i++){

        for ( j=i+1; j<limit; j++){
            if (value[i]>value[j]){
            temp=value[i];
            value[i]=value[j];
            value[j]=temp;
            }
                       
        }
        
    }
    printf("Sroted array");
    for ( i = 0; i < limit; i++){
        printf("%d\n",value[i]);
    }
    

return 0;
}