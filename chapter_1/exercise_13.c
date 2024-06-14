// This program prints the lengths of the words in its input.

#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_LENGTH 15

int main(void) {
  int word_counts[MAX_LENGTH];
  int ch, length, state = OUT;

  while ( ( ch = getchar() ) != EOF ) {
    if (state == IN && ch == ' ' || ch == '\n' || ch == '\t') {
      state = OUT;
      word_counts[length] = word_counts[length] + 1;
      length = 0;
    } else {
      state = IN;
      length++;
    }
  }
  
  printf("Word Lengths:");
  int i;
  int j;
  
  for (i = 0; i < MAX_LENGTH + 1; i++) {
    printf("\n%.2d||", i);
    for (j = 1; j < word_counts[i] + 1; j++) {
      putchar('=');
      }
  }
  
  putchar('\n');

  return 0;
}
