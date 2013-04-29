#include <stdio.h>

/* let's see what the limits of our primitve types are shall we? */

main() {

  // unexpected stream buffer weirdness without this
  setvbuf(stdout, NULL, _IONBF, 0);

  int integer;
  short short_int;
  long long_int;
  double double_float;

  // this assumes the types wraps around when it reaches it's limit

  integer = 1;
  while (integer*2 > 0) {
    integer *= 2;
  }
  while (integer+1 > 0) {
    integer += 1;
  }
  printf("%d\t <= int <= \t%d\n", integer+1, integer);

  short_int = 1;
  while (short_int*2 > 0) {
    short_int *= 2;
  }
  while (short_int+1 > 0) {
    short_int += 1;
  }
  printf("%d\t <= short <= \t%d\n", short_int+1, short_int);

  long_int = 1;
  while (long_int*2 > 0) {
    long_int *= 2;
  }
  while( long_int+1 > 0) {
    long_int += 1;
  }
  printf("%ld\t <= long <= \t%ld\n", long_int+1, long_int);

  // this won't be accurate because we aren't expressing floating numbers by adding 1
  /*
  double_float = 0;
  while (double_float+1 > 0) {
    double_float += 1;
  }
  printf("%f\t <= double <= \t%f\n", double_float+1, double_float);
  */
}
