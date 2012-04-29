/*
 * A solution to Exercise 1-15 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart, <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdio.h>
#include <stdlib.h>

float farenheitToCelsius(float farenheit)
{
  return (5.0 / 9.0) * (farenheit - 32.0);
}

int main(void)
{
  printf("F\tC\n=============\n");
  float i;
  for (i = 0; i <= 300; i += 20) {
    printf("%3.0f\t%5.1f\n", i, farenheitToCelsius(i));
  }
  return EXIT_SUCCESS;
}
