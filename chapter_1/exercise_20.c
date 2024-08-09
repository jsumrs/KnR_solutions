/* This program detabs its input, replacing \t chars with the
 * proper amount of blank spaces till the next tab stops. */

#include <stdio.h>

#define MAXLINE 1000
#define TABSTOP 8

int get_line(char line[], int cap);
void copy(char to[], char from[]);
void print_array(char arr[], int lim);

/*print longest input line */
int main() {
  int len = 0;    /* current line length */
  char line[MAXLINE]; /* current input line */

  while( (len = get_line(line, MAXLINE)) > 0 ) {
    printf("%s\n", line);
  }
  return 0;
}


/* get_line: read a line into string_array, return its length */
int get_line(char string_array[], int lim) {
  int c, i;
  int col = 0;
  for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++col) {
    if (c == '\t') {
      int spaces = TABSTOP - (col % TABSTOP);
      for (int j = 0; j < spaces && i < lim - 1; ++j, ++i) {
        string_array[i] = ' ';
      }
      --i;
    } else {
      string_array[i++] = c;
    }
  }

  if (c == '\n') {
    string_array[i++] = c;
  }
  
  string_array[i] = '\0';
  return i; 
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i = 0;

  while ( (to[i] = from[i]) != '\0'){
    ++i;
  }
}

void print_array(char arr[], int len) {
  putchar('[');
  for (int i = 0; i < len && arr[i] != '\0'; i++) {
    putchar(arr[i]);
    putchar(',');
    putchar(' ');
  }
  putchar(']');
  putchar('\n');
}
