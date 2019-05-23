#include<stdio.h>
int main(){
    int n[10];
    int i,j;

    for(i=0; i<10; i++){
        scanf("%d",&n[i]);
    }
    for(j=0; j<10; j++){
        printf("%d\n",n[j]);
    }
    return 0;
}
