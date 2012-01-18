/* Exercise 1-12: Write a program that prints its input one word per line. */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int16_t character;
  bool in_whitespace;
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
