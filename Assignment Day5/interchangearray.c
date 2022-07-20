#include<stdio.h>
int main (){
/* Declaring variables*/
int limit,i,array1[100], array2[100],tmp;
printf("Enter the limit\n");
scanf("%d",&limit);
printf ("Enter the values of Array1\n");
/* Looping to take input*/
for ( i = 0; i < limit; i++){
   scanf("%d", &array1[i]);
}
printf("Enter the values of Array2\n");
for ( i = 0; i < limit; i++){
    scanf("%d", &array2[i]);
    
}
/* Swapping the array*/
for ( i = 0; i < limit; i++){
    tmp=array1[i];
    array1[i]=array2[i];
    array2[i]=tmp;
    
}
/* printing Values*/
printf("Array1 = \t");
for ( i = 0; i < limit; i++){
    printf("%d,",array1[i]);
}
printf("\n");

printf("Array2 =\t ");
for ( i = 0; i < limit; i++){
    printf(" %d,", array2[i]);
}
printf("\n");
/* sorting the array1*/
int sortv1,sortv2,swap;
  for ( sortv1 = 0; sortv1 < limit-1; sortv1++){
    for ( sortv2 = sortv1+1; sortv2 < limit; sortv2++){
        if (array1[sortv1]>array1[sortv2]) {
            swap=array1[sortv1];
            array1[sortv1]=array1[sortv2];
            array1[sortv2]=swap;
        }
        

        
    }
    
  }
/* sorting the array2*/
  for ( sortv1 = 0; sortv1 < limit-1; sortv1++){
    for ( sortv2 = sortv1+1; sortv2 < limit; sortv2++){
        if (array2[sortv1]>array2[sortv2]) {
            swap=array2[sortv1];
            array2[sortv1]=array2[sortv2];
            array2[sortv2]=swap;
        }
        

        
    }
    
  }
/* printing Sorted Values*/
printf("\n");
printf("Sorted Array1 = \t");
for ( i = 0; i < limit; i++){
    printf("%d ",array1[i]);
}
printf("\n");

printf("Sorted Array2 =\t ");
for ( i = 0; i < limit; i++){
    printf(" %d  ", array2[i]);
}
 printf("\n"); 
return 0;
}