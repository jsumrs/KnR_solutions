// This program trims space characters down to a single space.
#include <stdio.h>

int main(void) {
  int last_c, c;
  
  last_c = 'a';
  while( (c = getchar()) != EOF ) {
    if (last_c != ' ' || c != ' ') {
      putchar(c);
      last_c = c;
    }
  }
  return 0;
}
