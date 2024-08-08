/* This program reads input and removes trailing blanks and tabs from it.
 * It will also remove entirely blank lines. */
 
#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int cap);
void copy(char to[], char from[]);

/*print longest input line */
int main() {
  int len = 0;    /* current line length */
  int max = 0;    /* max length seen so far */
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  while( (len = get_line(line, MAXLINE)) > 0 ) {
    printf("%s", line);
  }

  return 0;
}


/* get_line: read a line into string_array, return its length */
int get_line(char string_array[], int lim) {
  int c, i;
  int last_char = 0;
  int is_blank = 1;

  for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; i++) {
    if ( !(last_char == ' ' && c == ' ') ) {
      string_array[i] = c;
      is_blank = 0;
    }

    last_char = c;
  }

  if (c == '\n') {
    string_array[i] = c;
    i++;
  }
  
  string_array[i] = '\0';

  while ((c = getchar()) != '\n' && c != EOF) {
    is_blank = 0;
    i++;
  }
  
  return is_blank == 1 ? 0 : i; // if line is blank return len 0, otherwise return i; 
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i = 0;

  while ( (to[i] = from[i]) != '\0'){
    ++i;
  }
}
