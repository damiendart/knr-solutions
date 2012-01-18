/* Exercise 1-4: Write a program to print the corresponding Celsius to
 * Fahrenheit table. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("C\tF\n=============\n");
  float i;
  for (i = 0; i <= 300; i = i + 20) {
    printf("%3.0f\t%5.1f\n", i, ((9.0 * i) / 5) + 32);
  }
  return EXIT_SUCCESS;
}
