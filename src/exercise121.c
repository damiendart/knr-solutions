/* Exercise 1-21: Write a program "entab" that replaces strings of blanks by
 * the minimum number of tabs and blanks to achieve the same spacing. Use the
 * same tab stops as for "detab". When either a tab or a single blank would
 * suffice to reach a tab stop, which should be given preference? */

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
      line_length = (character != '\n') ? ++line_length : 0;
    }
  }
  return EXIT_SUCCESS;
}
