#include<stdio.h>
int main(){
    const int length =5;
    const int width  =10;
    const char newline ='\n';
    int area;

    area = length * width;
    printf("Area is : %d", area);
    printf("%c",newline);

    return 0;
}
