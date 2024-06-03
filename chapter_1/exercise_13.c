#include <stdio.h>

int main(){
  #define SIZE 15 // Max size of words to count;
  #define IN 1 // Inside the word
  #define OUT 0 // Outside the word
  
  int hgram[SIZE];
  for (int i = 0; i < SIZE; i++){
    hgram[i] = 0;  
  }

  int c, count, state, biggest;
  biggest = 0; // Most common word length.
  count = 0;
  state = OUT;
  while ((c = getchar()) != EOF){
    if (count >= SIZE){
      break;
      }
    if (c == '\n' || c == '\b' || c == ' '){
      if (state == IN){
        hgram[count] = hgram[count] + 1;
        
        // Update most common word lenth;
        if (hgram[count] > biggest) {
          biggest = hgram[count];
        }

        count = 0;
      }
      state = OUT;
    } else {
        state = IN;
        count++;
    }
  }    

  // Print a basic horizontal histogram of word sizes.
  printf("Word Length | # of occurrences\n");
  for (int i = 0; i < SIZE; i++){
    printf("%2d |", i);
    for (int j = 0; j < hgram[i]; j++){
      printf("=");
    }
    putchar('\n');
  }
  putchar('\n');
  // Print a vertical histogram of word sizes.
  // Gave up, too big of a time sink.
  for (int i = biggest; i > 0; i--){
    printf("%2d ", i);
    for (int j = 0; j < SIZE; j++){
      if (hgram[j] != 0 && hgram[j] <= i) {
        putchar('|');
      } else {
        putchar('|');
      }
    }
    printf("\n");
  }
  
  printf("--------------------------------------------------\n");
  for (int i = 0; i < SIZE; i++) {
    printf("%3d", i);
  }

  putchar('\n');
}
