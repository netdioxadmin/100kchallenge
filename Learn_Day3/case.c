#include<stdio.h>
int main (){
    int menu = 0;
    printf(" Welcome to Bro Hotel...!!! \n");
    printf("*********Menu********\n");
    printf("Choose :: 1 :: for Porata\nChoose :: 2 :: for Biriyni\nChoose :: 3 :: for Fried Rice\nChoose :: 4 :: for Mandi\n");
    scanf("%d",&menu);
    switch (menu){
    case 1:
        printf(" You have choosen POROTA..!!\n");
        break;
    case 2: 
        printf(" You have choosen Biriyni..!!\n");
        break;
    case 3: 
        printf(" You have choosen FRIED RICE..!!\n");
        break;
    case 4: 
        printf(" You have choosen Mandi..!!\n");
        break;
    default:
        printf ("Thank you Fool");
    }

return 0 ;
}