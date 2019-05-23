#include<stdio.h>
int main(){
    int a=55;
    int b=13;

    printf("Binary And : %d\n",a&b);
    printf("Binary Or  : %d\n",a|b);
    printf("Binary XOR  : %d\n",a^b);
    printf("Binary One's complement  : %d\n",~a);
    printf("Binary Left shift : %d\n", a<<2); //shift left 2 bit, in left shift values will be double for every shift
    printf("Binary Right shift : %d\n", a>>2); //shift right 2 bit, in right shift values will be half for every shift
}
