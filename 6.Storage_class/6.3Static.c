//instruct the compiler to keep in local variable
#include <stdio.h>

void func(void); // function declaration

static int count = 5; // global variable

int main() {

   while(count--) {
      func();
   }

   return 0;
}

void func( void ) { // function definition

   static int i = 5; // local static variable
   i++;

   printf("i is %d and count is %d\n", i, count);
}
