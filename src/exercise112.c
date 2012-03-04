/*
 * A solution to Exercise 1-12 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int16_t character = 0;
  bool in_whitespace = false;
  while ((character = getchar()) != EOF) {
    if ((character == ' ') || (character == '\t')) {
      if (in_whitespace == false) {
        putchar('\n');
        in_whitespace = true;
      }
    } else {
      putchar(character);
      in_whitespace = false;
    }
  }
  return EXIT_SUCCESS;
}
