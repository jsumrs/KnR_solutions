#include <stdio.h>

int get_line(char line[], int cap);
void expand_array(char str[], int cap);
void copy(char to[], char from[]);

/*print longest input line */
int main() {
  int len;    /* current line length */
  int max;    /* max length seen so far */
  int cap = 8; /* capacity of the char arrays. */ 
  char line[cap]; /* current input line */
  char longest[cap]; /* longest line saved here */

  while( (len = get_line(line, cap)) > 0 ) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) {  /* there was a line */
    printf("The longest line line was: \n%s", longest);
  }
  return 0;
}



/* get_line: read a line into string_array, return its length */
int get_line(char string_array[], int cap) {
  int c, i;
  
  while ( (c = getchar()) != EOF && c != '\n') {

    if (i >= cap) {
      expand_array(string_array, cap);
    }

    string_array[i] = c;
  }

  if (c == '\n') {
    string_array[i] = c;
    ++i;
  }

  string_array[i] = '\0';
  return i;
}

/* expand_array: double the length of the passed in array, return new cap */
int expand_array(char arr[], int cap) {
  int new_cap = cap * 2;
  char expanded[new_cap];
  copy(expanded, arr);
  arr = expanded;
  return new_cap;
}


/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ( (to[i] = from[i]) != '\0'){
    ++i;
  }
}
