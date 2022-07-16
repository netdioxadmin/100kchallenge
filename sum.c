#include<stdint.h>

int main (){
  int a = 0, b = 0 , sum= 0;
  printf("Enter two numbers");
  scanf ("%d%d" ,&a, &b);
  sum = a + b;
  printf( "The sum of: %d and: %d is: %d ", a,b,sum);
}