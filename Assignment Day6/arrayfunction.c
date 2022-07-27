#include<stdio.h>
/* Declaring constent size  */
int size =3; 
void displayArray(int array[size][size]);
void getArray(int array [size][size]);

int main (){
/*   2D array size */
    int array[size][size];
    getArray(array); 
    displayArray(array);
return 0;
}
/* function to get array */
void getArray(int array[size][size]){
  int i,j;
    printf(" Enter %dX%d numbers:\n",size,size);
    for ( i = 0; i < size; i++){
        for ( j= 0; j < size; j++){
        scanf("%d",&array[i][j]);
        }
     }
     return(array);
}
/* Function to display array */
void displayArray(int array[size][size]){
    int i,j;
    printf("Values of array are\n");
    for (  i = 0; i < size; i++){
        for ( j= 0; j < size; j++){
          printf("%d\t",array[i][j]);
        }
      printf("\n");    
    }
 
}