// The purpose of this exercise is to write a program that counts newlines and tabs.

#include <stdio.h>

int main(void) {
  long nl, tb, in;

  while( (in = getchar()) != EOF) {
    if (in == '\n'){
      ++nl;
    } else if (in == '\t') {
      ++tb;
    }
  }

  printf("\n# of newlines: %ld\n# of tabs: %ld\n", nl, tb);
  return 0;
}
