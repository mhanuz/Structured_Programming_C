#include<stdio.h>
int main(){
    int a=30; //local variable definition
    if(a==10){
        printf(" %d is equal to 10",a);
    }
    else if(a<10){
        printf(" %d id less than 10",a); //if else if condition is true
    }
    else if(a>10){
        printf(" %d is greater than 10",a); //if else if condition is true
    }
    else{
        printf("%d is undefined",a); //if none of the conditions is true
    }

    return 0;
}
