#include <stdio.h>
#define MAXLINE 1000 /* max input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/*print longest input line */
int main() {
  int len;    /* current line length */
  int max;    /* max length seen so far */
  char line[MAXLINE]; /* current input line */
  char longest [MAXLINE]; /* longest line saved here */

  max = 0;
  while( (len = get_line(line, MAXLINE)) > 0 ) {
    if (len > 20) {
      printf("%s\n", line);
    }
  }
  return 0;
}



/* get_line: read a line into string_array, return its length*/
int get_line(char string_array[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1; i++) {
    c = getchar();
    if ( c != EOF && c != '\n') {
      string_array[i] = c;
    } else {
      break;
    }
  }
  if (c == '\n') {
    string_array[i] = c;
    ++i;
  }
  string_array[i] = '\0';
  return i;
}



/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ( (to[i] = from[i]) != '\0'){
    ++i;
  }
}
