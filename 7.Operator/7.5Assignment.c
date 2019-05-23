#include<stdio.h>
int main(){
    int a=5;
    int b=8;
    int c;

    printf("Left hand assignment    : %d\n", c=a);
    printf("add and assignment      : %d\n",a+=b); // this is a short hand operator >>>-- (a=a+b) original
    printf("subtract and assignment : %d\n",a-=b);
    printf("multiply and assignment : %d\n",a*=b);
    printf("divided and assignment  : %d\n",a/=b);
    printf("modulus and assignment  : %d\n",a%=b);
    printf("left shift &  assignment: %d\n",a<<=2);
    printf("right shift & assignment: %d\n",a>>=2);
    printf("binary and & assignment : %d\n",a&=3);
    printf("xor and assignment      : %d\n",a^=b);
    printf("inclusive or and ass    : %d\n",a|=b);


}
