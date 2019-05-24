#include<stdio.h>
int main(){
    int a=10;// general variable declaration
    int *b;//pointer variable declaration

    b=&a; //store address of variable a into variable b

    printf("Address of variable a: %x\n",&a); //

    printf("Address of variable a: %x\n",b); // where address is store in variable b

    printf("Value of *b is : %d\n",*b); // access the value using pointer
}
