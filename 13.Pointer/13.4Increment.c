#include <stdio.h>

const int max = 3;

int main () {

   int  arr[] = {10, 20, 30};
   int  i, *ptr;
   ptr = &arr;

   for ( i = 0; i < max; i++) {

      printf("Address of arr[%d] = %x\n", i, &ptr );
      printf("Value of arr[%d] = %d\n", i, *ptr );

      // move to the next location
      ptr++;
   }

   return 0;
}

