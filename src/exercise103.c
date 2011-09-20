/* Exercise 1-3: Modify the temperature conversion program to print a heading
 * above the table. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  printf("F\tC\n=============\n");
  float i;
  for (i = 0; i <= 300; i = i + 20) {
    printf("%3.0f\t%5.1f\n", i, (5.0 / 9.0) * (i - 32.0));
  }
  return EXIT_SUCCESS;
}
