/* Exercise 1-10: Write a program to copy its input to its output, replacing
 * each tab by \t, each backspace by \b, and each backslash by \\. This makes
 * tabs and backspaces visible in an unambiguous way. */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int16_t character;
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
