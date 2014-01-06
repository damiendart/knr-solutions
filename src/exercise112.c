/*
 * A solution to Exercise 1-12 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart, <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int character = 0;
  int in_whitespace = 0;
  while ((character = getchar()) != EOF) {
    if ((character == ' ') || (character == '\t' || character == '\n')) {
      if (in_whitespace == 0) {
        putchar('\n');
        in_whitespace = 1;
      }
    } else {
      putchar(character);
      in_whitespace = 0;
    }
  }
  return EXIT_SUCCESS;
}
