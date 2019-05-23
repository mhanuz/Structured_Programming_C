#include<stdio.h>
int main(){
    int a=5;
    int b;
    int *ptr;
    printf("return size of a variable : %d\n",sizeof(a));
    printf("return the actual address of variable: %d\n",&a);

    // example of & and * operators
   ptr = &a;	// 'ptr' now contains the address of 'a'*
   printf("value of a is : %d\n",a);
   printf("pointer is : %d\n",*ptr);

   // example of ternary operator (conditional operator)
   a = 4;
   b = (a == 1) ? 7: 11;
   printf( "Value of b is : %d\n",b);

   b = (a == 4) ? 5: 9;
   printf( "Value of b is : %d\n",b);

}
