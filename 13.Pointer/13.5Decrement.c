#include <stdio.h>

const int max = 3;

int main () {

   int  a[] = {5,6,7};
   int  i, *ptr;
   ptr = &a[max-1];

   for ( i = max; i > 0; i--) {

      printf("Address of a[%d] = %x\n", i-1, ptr );
      printf("Value of a[%d] = %d\n", i-1, *ptr );

      // move to the previous location
      ptr--;
   }

   return 0;
}
