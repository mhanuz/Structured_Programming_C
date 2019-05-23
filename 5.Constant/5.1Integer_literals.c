// A constant (literal) refer fixed value that the program not alter during execution
#include<stdio.h>
int main (){
    //Some integer literals
    printf("212  >--  Legal \n");
    printf("215u >--  Legal \n");
    printf("0xFeeL >-- Legal \n");
    printf("078  >-- Illegal: 8 is not an octal digit \n");
    printf("032UU >-- Illegal: cannot repeat a suffix \n");
    printf("85    >-- decimal");


    return 0;
}
