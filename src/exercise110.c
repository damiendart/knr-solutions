/*
 * A solution to Exercise 1-10 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart, <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int16_t character = 0;
  while ((character = getchar()) != EOF) {
    switch (character) {
      case '\t':
        putchar('\\');
        putchar('t');
        break;
      case '\b':
        putchar('\\');
        putchar('b');
        break;
      case '\\':
        putchar('\\');
        putchar('\\');
        break;
      default:
        putchar(character);
    }
  }
  return EXIT_SUCCESS;
}
