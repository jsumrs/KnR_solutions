#include <stdio.h>

#define SIZE 127 //127 is the 'DEL' char ( the last ASCII character )
int main() {
  // Declare and initialize the frequency array.
  int chars[SIZE];
  for (int i = 0; i <= SIZE; i++) {
    chars[i] = 0;
  }

  // Get input and update the frequency array.
  int c;
  while ( (c = getchar()) != EOF) {
    chars[c] = chars[c] + 1;
  }

  // Print the histogram of the frequencies.
  for (int i = 0; i <= SIZE; i++) {
   
    if (chars[i] > 0) printf("%3c |", i);
    for (int j = 1; j <= chars[i]; j++) {
      putchar('=');
    }
    if (chars[i] > 0) putchar('\n');
  }


} 
