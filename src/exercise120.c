/*
 * A solution to Exercise 1-20 in The C Programming Language (Second Edition).
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
  int32_t character = 0;
  uint32_t line_length = 0;
  uint32_t tab_width = 8;
  while ((character = getchar()) != EOF) {
    if (character == '\t') {
      uint32_t spaces_to_add = tab_width - (line_length % tab_width);
      printf("%*c", spaces_to_add, ' ');
      line_length += spaces_to_add;
    } else {
      putchar(character);
      line_length = (character != '\n') ? line_length + 1 : 0;
    }
  }
  return EXIT_SUCCESS;
}
