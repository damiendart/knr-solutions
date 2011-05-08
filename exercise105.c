/* Modify the temperature conversion program to print the table in reverse
 * order, that is, from 300 degrees to 0. */ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  printf("F\tC\n=============\n");
  float i;
  for (i = 300; i >= 0; i -= 20) {
    printf("%3.0f\t%5.1f\n", i, (5.0 / 9.0) * (i - 32.0));
  }
  return EXIT_SUCCESS;
}
