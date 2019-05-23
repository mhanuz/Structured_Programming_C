#include<stdio.h>
int main(){
    int a=10;
    do{ //guaranteed to execute at least one time.
        printf("%d\n",a);
        a--;
    }
    while(a>10);
}
