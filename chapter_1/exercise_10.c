// This program makes newlines and tabs visible.
#include <stdio.h>

int main(void) {
  int c;

  while( (c = getchar()) != EOF ) {
    if (c == '\n') {
      putchar('\\');
      putchar('n');
    } else if (c == '\t') {
      putchar('\\');
      putchar('t');
    }
  }

  return 0;
}
