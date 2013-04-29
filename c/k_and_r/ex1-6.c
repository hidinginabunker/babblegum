#include <stdio.h>

/* Verify that the experession getchar() != EOF is 0 or 1 */

main()
{
  if ( (getchar() != EOF) == 0 ) {
    printf("(getchar() != EOF) == 0\n");
  } else if ( (getchar() != EOF) == 1) {
    printf("(getchar() != EOF) == 1\n");
  } else {
    printf("(getchar() != EOF) is not 1 or 0\n");
  }
}
