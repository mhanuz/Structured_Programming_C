#include <stdio.h>
const int MAX = 3;
int main () {
   int  var[] = {3, 4, 5};
   int i, *ptr[MAX];
   for ( i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; // assign the address of integer
   }
   for ( i = 0; i < MAX; i++) {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
   }
   return 0;
}
