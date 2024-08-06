#include <stdio.h>
#define MAXLINE 1000
int get_line(char line[], int cap);
void copy(char to[], char from[]);

/*print longest input line */
int main() {
  int len;    /* current line length */
  int max;    /* max length seen so far */
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  while( (len = get_line(line, MAXLINE)) > 0 ) {
    printf("inside whileloop");
    if (len > max) {
      max = len;
      copy(longest, line);
    }

    printf("line length: %d\n", len);
  }
  if (max > 0) {  /* there was a line */
    printf("The longest line line was: \n%s", longest);
  }
  return 0;
}



/* get_line: read a line into string_array, return its length */
int get_line(char string_array[], int lim) {
  printf("calling getline");
  int c, i;
  for (i = 0; i < lim - 1 && ((c=getchar()) != EOF) && c != '\n'; i++) {
    string_array[i] = c;
  }

  if (c == '\n') {
    string_array[i++] = c;
  }
  
  string_array[i] = '\0';

  while (c != '\n' || c != EOF) {
    i++;
    c = getchar();
  }
  return i; 
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i;

  while ( (to[i] = from[i]) != '\0'){
    ++i;
  }
}
