/* This program prints all input lines that are longer than 80 characters */
// 1. Get user input.
// 2. If input line is bigger than 80 characters, save it.
//  2.1 Save it into an array and append a newline at the end.
//  2.2 The array should always only contain a single EOF at the end.
// 3. Print all the lines saved

#include <stdio.h>
#define MAXLEN 4

int getline(char line[], int len);
void copy(char from[], char to[]);

int main(void) 
{
  
  int c, length;
  length = 8;
  char line[length];


  while ( (c = getchar()) != EOF ) {
    getline(line, length); 
  }
  return 0;
}

/* line: the array to hold the line in.
 * len:  the capacity of the line's array. */
int getline(char line[], int len) 
{
  int c = '\0';
  int num_chars = 0;

  while (c != '\n') {
    c = getchar();
    if (c != EOF) {
      num_chars++;
      if (num_chars < len - 1) {
        line[num_chars] = c;
      } else {
        // Expand the line's array if it is not big enough to hold the new characters.
        line[num_chars] = '\0';
        char[len * 2] expanded_line;
        copy(line, expanded_line);
        line = expanded_line;
      }
    } else {
      break;
    }
  }
  return num_chars;
}


void copy(char from[], char to[])
{
  int i = 0;
  int c = to[0];
  
  while( c != '\0') {
    c = from[i];
    to[i] = c;
    i++;
  }
}
