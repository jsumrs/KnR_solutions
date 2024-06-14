// This program prints the input, one word on one line at a time.

#include <stdio.h>

#define IN 1      // Inside a word.
#define OUT 0     // Outside a word.

int main(void) {
  int c;

  while ( ( c = getchar() ) != EOF ) {
    if (c == ' ') { 
      putchar('\n');
    }
    else { 
      putchar(c);
    }
  }

  return 0;
}
