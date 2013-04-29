#include <stdio.h>

/*
 * Write a program that prints its input one word per line
 */


int main()
{
  int c, prev_c;
  prev_c = '\n';
  while ((c = getchar()) != EOF) {
    if ( (c == ' ' || c == '\t' || c == '\n') && (prev_c != ' ' && prev_c != '\t' && prev_c != '\n') ) {
      putchar('\n');
    } else if (c != ' ' && c != '\t') {
      putchar(c);
    }
    prev_c = c;
  }
}
