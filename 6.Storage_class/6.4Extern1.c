//extern storage class is used to global
#include<stdio.h>
int count;
extern void write_extern();
    int main(){
      count=5;
      write_extern();
}


//program 2
#include <stdio.h>

extern int count;

void write_extern(void) {
   printf("count is %d\n", count);
}
