/* Exercise 1-19: Write a function "reverse(s)" that reverses the character
 * string "s". Use it to write a program that reverses its input a line at a
 * time. */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

uint32_t reverse(char *s);

int main(int argc, char **argv)
{
  char *buffer = NULL;
  uint32_t buffer_length = 0;
  char character = 0;
  bool finished_inputting = false;
  /* You would normally have the end-of-file test in the loop condition
   * expression, however this introduces a subtle bug where the last line
   * isn't processed if the input doesn't end with a newline. See
   * <http://users.powernet.co.uk/eton/kandr2/krx113.html> for details. */
  while (finished_inputting == false) {
    character = getchar();
    if (character == '\n' || (character == EOF && buffer_length > 0)) {
      buffer = realloc(buffer, ++buffer_length * sizeof(char));
      buffer[buffer_length - 1] = '\0';
      reverse(buffer);
      printf("%s\n", buffer);
      free(buffer);
      buffer = NULL;
      buffer_length = 0;
    } else {
      buffer = realloc(buffer, ++buffer_length * sizeof(char));
      buffer[buffer_length - 1] = character;
    }
    finished_inputting = (character == EOF);
  }
  return EXIT_SUCCESS;
}

uint32_t reverse(char *s)
{
  uint32_t string_length = 0;
  while (s[string_length] != '\0') {
    string_length++;
  }
  int32_t i = 0, j = string_length - 1;
  char temp = 0;
  for (i = 0; i < j; i++, j--) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
  return string_length;
}
