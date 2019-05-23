#include<stdio.h>
int main(){
    int a=100;
    int b=200;
    int c;
    scanf("%d",&c);

    if(c>a){
        if(c<b){
            printf("%d is in between a and b",c);
        }
    }
    return 0;
}
