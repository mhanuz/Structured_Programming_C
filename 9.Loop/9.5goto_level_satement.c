#include<stdio.h>
int main(){
    int num=0;

    abar_kor:
        printf("%d\n",num);
        num++;

        if(num<=10){
            goto abar_kor;
        }
        return 0;
}
