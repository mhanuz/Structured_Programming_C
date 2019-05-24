#include<stdio.h>

//pointer is used for dynamic memory allocation
//A pointer is a variable whose value is the address of another variable
int main(){
    int a;
    int b[5];

    printf(" The address of a is %x\n",&a); //memory location access by using (&) ampersand
    printf(" The address of b is %x\n",&b);

    return 0;
}
