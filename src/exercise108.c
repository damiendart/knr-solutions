/*
 * A solution to Exercise 1-8 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  uint32_t blank_count, tab_count, newline_count;
  int16_t character;
  blank_count = tab_count = newline_count = 0;
  while ((character = getchar()) != EOF) {
    switch (character) {
      case ' ':
        blank_count++;
        break;
      case '\t':
        tab_count++;
        break;
      case '\n':
        newline_count++;
        break;
    }
  }
  printf("Input contains %d blank(s), %d tab(s), and %d newline(s).\n",
      blank_count, tab_count, newline_count);
  return EXIT_SUCCESS;
}
