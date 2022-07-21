#include<stdio.h>
#include<string.h>
int main(){
    char pal[20];
    int i,len,flag=0;
    printf("Enter your String ");
    scanf("%s",pal);
    len = strlen(pal);
    for ( i = 0; i < len; i++) {
       if (pal[i] == pal[len-i-1]){
            flag = 1;
         break;        
      }
    }

        if (flag==1) {
        printf("String is a palindrome");
    }    
    else {
        printf("String is not a palindrome");
    }

 return 0;
}