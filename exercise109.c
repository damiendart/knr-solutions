/* Exercise 1-8: Write a program to copy its input to its output, replacing
 * each string of one of more blanks with a single blank. */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int16_t character, previous_character;
  while ((character = getchar()) != EOF) {
    if ((previous_character == ' ') && (character == ' ')) {
      continue;
    } else {
      putchar(character);
    previous_character = character;
    }
  }
  return EXIT_SUCCESS;
}
