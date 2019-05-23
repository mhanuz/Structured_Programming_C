#include<stdio.h>
int main(){
    int num,grade;
    scanf("%d",&num);
    grade=num/10;
    switch(grade){

    case 10:
        printf("A+");
        break;
    case 9:
        printf("A");
        break;
    case 8:
        printf("A-");
        break;
    case 7:
        printf("B+");
        break;
    case 6:
        printf("B");
        break;
    case 5:
        printf("B-");
        break;
    case 4:
        printf("D");
        break;
    default:
        printf("Enter a valid number");


    }
    return 0;
}
