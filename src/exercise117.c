/*
 * A solution to Exercise 1-17 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart, <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define LINE_LIMIT 80

int main(void)
{
  uint32_t current_line_length = 0;
  int32_t buffer[LINE_LIMIT] = { 0 };
  bool buffer_in_use = true;
  int32_t character = 0;
  while ((character = getchar()) != EOF) {
    if (character == '\n') {
      if (current_line_length > LINE_LIMIT) {
        putchar('\n');
      }
      current_line_length = 0;
      buffer_in_use = true;
    } else {
      current_line_length++;
      if (current_line_length <= LINE_LIMIT) {
        buffer[current_line_length - 1] = character;
      } else {
        if (buffer_in_use == true) {
          uint32_t i;
          for (i = 0; i < LINE_LIMIT; ++i) {
            putchar(buffer[i]);
          }
          buffer_in_use = false;
        }
        putchar(character);
      }
    }
  }
  return EXIT_SUCCESS;
}
