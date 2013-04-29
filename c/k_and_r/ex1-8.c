#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines */

main()
{
  int c, bc, tc, lc;
  bc = tc = lc = 0;

  while( (c = getchar()) != EOF ) {
    if ( c == '\n')
      ++lc;
    else if ( c == '\t')
      ++tc;
    else if (c == ' ')
      ++bc;
  }

  printf("%d blanks, %d tabs, %d new lines\n", bc, tc, lc);
}
