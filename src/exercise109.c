/*
 * A solution to Exercise 1-9 in The C Programming Language (Second Edition).
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
  int previous_character = 0;
  while ((character = getchar()) != EOF) {
    if (!((previous_character == ' ') && (character == ' '))) {
      putchar(character);
      previous_character = character;
    }
  }
  return EXIT_SUCCESS;
}
