//A floating point constant has an integer part a decimal part a fractional part and ax exponent part
#include<stdio.h>
int main(){
    printf("3.14159 >--    Legal  \n");
    printf("314159E-5L >-- Legal \n");
    printf("510E >-- Illegal: incomplete exponent \n");
    printf("210f >-- Illegal: no decimal or exponent \n");
    printf(".e55 >-- Illegal: missing integer or fraction \n");

    return 0;
}
