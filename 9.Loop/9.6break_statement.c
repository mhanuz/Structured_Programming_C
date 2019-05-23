#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i;
    for(i=1;  i<=a; i++){
        printf("%d\n",i);
        if(i==5)
            break;//terminate the loop using break statement
    }
}
