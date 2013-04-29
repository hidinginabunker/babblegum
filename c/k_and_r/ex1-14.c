#include <stdio.h>

/*
 * Write a program to print a histogram of the frequencies
 * of different characters in its input
 */

#define MAX_CHAR_CODE   256

int main()
{
  int i, c;
  float total_chars = 0.0;
  int char_counts[MAX_CHAR_CODE];


  for( i = 0; i < MAX_CHAR_CODE; i++) {
    char_counts[i] = 0;
  }


  while ( (c = getchar()) != EOF) {
    char_counts[c]++;
    total_chars++;
  }


  for( i = 0; i < MAX_CHAR_CODE; i++) {
    if (char_counts[i] == 0) {
      continue;
    } else if ( i == '\n') {
      printf("The character '\\n' appeared %3.2f of the time\n", (char_counts[i]/total_chars)*100.0);
    } else if ( i == '\t') {
      printf("The character '\\t' appeared %3.2f of the time\n", (char_counts[i]/total_chars)*100.0);
    } else {
      printf("The character '%c' appeared %3.2f of the time\n", i, (char_counts[i]/total_chars)*100.0);
    }
  }

}
