#include <stdio.h>

main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 100;
  step = 5;

  printf("The Celsius Fahrenheit Table\n");
  printf("============================\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * (9.0/5.0)) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  // 5/9 * (f-32) = c
  // (f-32) = c*(9/5)
  // f = (c*9/5) + 32

}
