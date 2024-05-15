#include <stdio.h>

int main(){
  #define IN 1 //inside a word
  #define OUT 0 // outside a word
  int c;
  int state = IN;

  while ((c = getchar()) != EOF){
    if (c == '\t' || c == ' '){
      if (state == IN){
        putchar('\n');
      }
      state = OUT;
    } else {
      putchar(c);
      state = IN;
     }
  }
}
