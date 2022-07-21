#include<stdio.h>
int main(){
    int R;
    R=sum();
    printf("Result = %d\n",R);
return 0;
}
int sum(){
    int v1,v2,vr;
    printf("Enter 2 values\n");
    scanf ("%d%d",&v1,&v2);
    vr=v1+v2;
    return(vr);
}