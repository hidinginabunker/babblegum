#include <stdio.h>
/*
 * Write a program to print all input lines that are longer than 80 characters
 * TODO: Fix for lines longer than line_lim, it doesn't stop after reaching an EOF
 */

#define LINE_MIN  80
#define LINE_LIM  160

int get_line(char s[], int lim);
int print_line(char s[], int len);

int main() {
  int c, i, len;
  char line[LINE_LIM];
  int in_long_line = 0;

  // loop through the stream until we have reached the EOF

  while ((len = get_line(line, LINE_LIM)) > 0) {

    if (len > LINE_MIN) {
      in_long_line = 1;
    }

    if (in_long_line) {
      print_line(line, len);
    }

    if(line[len-1] == '\n') {
      in_long_line = 0;
    }

  }
}



int get_line(char s[], int lim) {
  int c, i;

  for (i=0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    i++;
  }

  s[i] = '\0';
  return i;
}



int print_line(char s[], int len) {
  int i;
  for(i=0; i < len; i++) {
    putchar(s[i]);
  }

  if( s[i] != '\0') {
    putchar(s[i]);
  }
}
