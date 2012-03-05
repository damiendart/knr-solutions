/*
 * A solution to Exercise 2-3 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int32_t htoi(char *);

int main(void)
{
  /* This whole this is pretty fragile. Don't feed it exotic input and things
   * should be ok. A few checks here and there wouldn't go amiss.
   * TODO: Handle invalid and exotic input properly. */
  char *buffer = NULL;
  uint32_t buffer_length = 0;
  char character = 0;
  while ((character = getchar()) != EOF) {
    if (!(isspace(character))) {
      buffer = realloc(buffer, ++buffer_length * sizeof(char));
      buffer[buffer_length - 1] = character;
    }
  }
  buffer = realloc(buffer, ++buffer_length * sizeof(char));
  buffer[buffer_length - 1] = '\0';
  printf("%d\n", htoi(buffer));
  return EXIT_SUCCESS;
}

int32_t htoi(char *string)
{
  int32_t value = 0;
  uint32_t start_position = string[0] == '-' ? 1 : 0;
  if (string[start_position] == '0' && 
      (string[start_position + 1] == 'x' || 
      string[start_position + 1] == 'X')) {
    start_position += 2;
  }
  uint32_t i = 0;
  for ( ; string[i] != '\0'; i++);
  for (uint32_t j = 0; i > start_position; i--, j++) {
    if (string[i - 1] >= '0' && string[i - 1] <= '9') {
      value += (string[i - 1] - '0') * (int)pow(16, j);
    } else if (string[i - 1] >= 'a' && string[i - 1] <= 'f') {
      value += ((string[i - 1] - 'a') + 10) * (int)pow(16, j);
    } else if (string[i - 1] >= 'A' && string[i - 1] <= 'F') {
      value += ((string[i - 1] - 'A') + 10) * (int)pow(16, j);
    } else {
      /* FIXME: Handle invalid input properly. */
      return 0;
    }
  }
  return string[0] == '-' ? -(value) : value;
}
