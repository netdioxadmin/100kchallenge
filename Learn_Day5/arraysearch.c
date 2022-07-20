#include<stdio.h>
int main(){
int limit,i,searchkey,flag=0;
int search[100];
printf ("Enter Limit: \n");
scanf("%d",&limit);
printf("Enter Values: \n");
for ( i = 0; i < limit; i++){
    scanf("%d",&search[i]);
}

printf("Please enter the search key:\n");
scanf("%d",&searchkey);
for ( i = 0; i < limit; i++){
    if (searchkey==search[i]){
        flag=1;
        break;
     }

}
if (flag==1){
    printf(" Value found at positon %d \n", i+1);
}else{
    printf("Value not found\n");
}

return 0;
}