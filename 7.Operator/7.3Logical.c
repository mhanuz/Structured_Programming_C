#include<stdio.h>

int main(){
    int a=2;
    int b=5;

        printf("A and B :%d\n", a&&b);
        a=0;
        printf("A and B :%d\n", a&&b);
        printf("A or B  :%d \n", a||b);
        b=0;
        printf("A or B  :%d\n", a||b);
}
