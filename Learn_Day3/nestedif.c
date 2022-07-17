#include<stdio.h>

int main(){
    int a=0, b=0, c=0;
    printf(" Welcome to No checking Program \n");
    printf( "Please enter 3 numbers....:\n"   );
    scanf("%d%d%d",&a,&b,&c);
    
    if (a>b && a>c)
    {
        printf("%d is the largest no \n",a);
    }else
     if (b>c && b>a)
     {
     printf("%d is the largest no \n",b);  
     }else
      if (c>b&& c>a)
      {
      printf("%d is the largest no \n",c);  
      }
        
    
    return 0;
}