/*
 * A solution to Exercise 1-4 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

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
