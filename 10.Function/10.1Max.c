#include<stdio.h>
int main(){
    int num1,num2;
    int maxi;
    scanf("%d%d",&num1,&num2);
    maxi=max(num1,num2);
    printf("%d",maxi);
    return 0;

}


int max(int a, int b){ // return_type function_name( parameter list )
    int big;
    if(a<b)
        big=b;
    if(a>b)
        big=a;
    return big;
}
