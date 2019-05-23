#include<stdio.h>
int main(){
    int a=5;
    printf("Orginal value  : %d\n",a);
    printf("Pre Increment  : %d\n",++a);
    printf("Orginal value  : %d\n",a);
    printf("Post Increment : %d",a++); printf(" >---  %d\n\n",a);

    a=5;
    printf("Orginal value  : %d\n",a);
    printf("Pre Decrement  : %d\n",--a);
    printf("Orginal value  : %d\n",a);
    printf("Post Decrement : %d",a--); printf(" >---  %d\n",a);
}
