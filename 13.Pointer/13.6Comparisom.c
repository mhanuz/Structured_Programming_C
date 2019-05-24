#include <stdio.h>
const int max = 3;
int main () {
   int  arr[] = {9,4,8};
   int  i, *ptr;

   ptr = arr;
   i = 0;

   while ( ptr <= &arr[max - 1] ) {

      printf("Address of arr[%d] = %x\n", i, ptr );
      printf("Value of arr[%d] = %d\n", i, *ptr );
      ptr++;
      i++;
   }

   return 0;
}
