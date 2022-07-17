#include<stdio.h>
int main(){
    int a = 0;
    printf("Welcome to Week Finder Program\n");
    printf("Please Choose a number between 1 and 7\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
    
    default:
        printf("Invalid Entry");
        break;
    }
return 0;
}