#include<stdio.h>
int size =3; 
void displayArray(int array[size][size]);
void getArray(int array [size][size]);

int main (){
    int array[size][size];
    getArray(array); 
    displayArray(array);
return 0;
}

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