#include<stdio.h>
int main(){
    int a=5; //local variable definition
    if(a<30){   //check the boolean condition
        printf("%d is less than 30",a); //if condition is true then print the following
    }
    else{
        printf("%d is greater than 30",a);//if condition is false then print the following
    }
    return 0;
}
