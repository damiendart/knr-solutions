/* Exercise 1-20: Write a program "detab" that replaces tabs in the input with
 * the proper number of blanks to space to the next tab stop. Assume a fixed
 * set of tab stops, say every "n" columns. Should "n" be a variable or a
 * symbolic parameter? */

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
      line_length = (character != '\n') ? ++line_length : 0;
    }
  }
  return EXIT_SUCCESS;
}
