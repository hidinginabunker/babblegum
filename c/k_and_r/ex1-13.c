#include <stdio.h>

/*
 * Write a program to print a histogram of the lengths
 * of words in its input.  It is easy to draw the histogram
 * with the bars horizontal; a vertical orientation is
 * more challenging
 */

//TODO this is the horizontal version, try a vertical version next

#define MAX_WORD_LEN 10

int main()
{
  int i, c, prev_c, word_len;
  int word_lens[MAX_WORD_LEN];

  // initialize array of word lengths to 0

  for ( i = 0; i < MAX_WORD_LEN; i++) {
    word_lens[i] = 0;
  }


  // count up the word lengths

  word_len = 0;
  while( (c = getchar()) != EOF) {

    if ( (c == ' ' || c == '\t' || c == '\n') && (prev_c != ' ' && prev_c != '\t' && prev_c != '\n') ) {
      // we've reached the end of a word, save it's length
      word_lens[word_len]++;
      word_len = 0;
    } else if ( c != ' ' && c != '\t') {
      // in the middle of a word? keep counting!
      word_len++;
    }
    prev_c = c;
  }


  // print the histogram

  for ( i = 0; i < MAX_WORD_LEN; i++) {
    printf("Words of length %d appear %d times\n", i, word_lens[i]);
  }
}
