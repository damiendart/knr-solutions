/*
 * A solution to Exercise 1-21 in The C Programming Language (Second Edition).
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
  uint32_t blank_count = 0;
  int32_t character = 0;
  uint32_t line_length = 0;
  uint32_t tab_width = 4;
  while ((character = getchar()) != EOF) {
    if (character == ' ') {
      blank_count++;
    } else {
      while ((line_length / tab_width) !=
          ((line_length + blank_count) / tab_width)) {
        putchar((blank_count == 1) ? ' ' : '\t');
        do {
          blank_count--;
          line_length++;
        } while ((line_length % tab_width) != 0);
      }
      if (blank_count > 0) {
        printf("%*c", blank_count, ' ');
      }
      putchar(character);
      blank_count = 0;
      line_length = (character != '\n') ? line_length + 1 : 0;
    }
  }
  return EXIT_SUCCESS;
}
