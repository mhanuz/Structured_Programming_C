/* A variable definition tells the compiler where and how much storage to create for the variable. */

#include<stdio.h>
//extern float g; //extern keyword is use to declare a variable at any place
int main(){
    int a; //A variable definition specifies a data type
    int b,c,d; // contains a list of  more variables of same type
    int e=5,f=10; //definition and initializing


    b=2;//initialize
    c=4;
    d=b+c;
    printf("%d \n", d);

    float g;
    g=15/2;
    printf("%f",g);
    return 0;

}
