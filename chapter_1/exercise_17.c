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
    if (len > 80) {
      printf("Line longer than 80 characters:\n%s", line);
    } 
  }

  return 0;
}


/* get_line: read a line into string_array, return its length */
int get_line(char string_array[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; i++) {
    string_array[i] = c;
  }

  if (c == '\n') {
    string_array[i] = c;
    i++;
  }
  
  string_array[i] = '\0';

  while ((c = getchar()) != '\n' && c != EOF) {
    i++;
  }
  return i; 
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i = 0;

  while ( (to[i] = from[i]) != '\0'){
    ++i;
  }
}
