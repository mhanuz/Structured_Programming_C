#include <stdio.h>
#include <string.h>

#define SIZE 40

int main(void)
{
  char str[SIZE] = "computer program";
  char * ptr;
  int    ch = 'p';

  ptr = strchr( str, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, str, ptr );

}
