#include <stdio.h>
const int MAX = 3;
int main () {
   int  var[] = {3,4,5};
   int i;
   for (i = 0; i < MAX; i++) {
      printf("Value of var[%d] = %d\n", i, var[i] );
   }
   return 0;
}
