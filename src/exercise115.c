/* Exercise 1-15: Rewrite the temperature conversion program of Section 1.2 to
 * use a function for conversion. */

#include <stdio.h>
#include <stdlib.h>

float farenheitToCelsius(float farenheit)
{
	return (5.0 / 9.0) * (farenheit - 32.0);
}

int main(int argc, char **argv)
{
  printf("F\tC\n=============\n");
  float i;
  for (i = 0; i <= 300; i += 20) {
    printf("%3.0f\t%5.1f\n", i, farenheitToCelsius(i));
  }
  return EXIT_SUCCESS;
}
