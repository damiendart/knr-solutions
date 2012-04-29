/*
 * A solution to Exercise 1-3 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart, <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  puts("F\tC\n=============");
  for (float i = 0; i <= 300; i += 20) {
    printf("%3.0f\t%5.1f\n", i, (5.0 / 9.0) * (i - 32.0));
  }
  return EXIT_SUCCESS;
}
