/* Exercise 1-13: Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars horizontal; a
 * vertical orientation is more challenging. */

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_LENGTH 10

int main(int argc, char **argv)
{
  uint32_t word_length_frequencies[MAX_WORD_LENGTH + 1] = { 0 };
  uint32_t largest_frequency = 0;
  uint32_t largest_frequency_length = 1;
  uint32_t current_word_length = 0;
  int32_t character = 0;
  /* You would normally have the end-of-file test in the loop condition
   * expression, however this introduces a subtle bug where the last word
   * isn't counted when the input doesn't end with a newline. See
   * <http://users.powernet.co.uk/eton/kandr2/krx113.html> for details. */
  bool finished_counting = false;
  while (finished_counting == false) {
    character = getchar();
    /* Punctuation marks are treated as white-space, so words such as
     * "white-space" count as two words. Unfortunately this means words like
     * "de-initialised" are counted incorrectly. Hey ho. */
    if (isspace(character) || ispunct(character) || character == EOF) {
      if (current_word_length > 0) {
        if (current_word_length > MAX_WORD_LENGTH) {
          current_word_length = MAX_WORD_LENGTH + 1;
        }
        word_length_frequencies[current_word_length - 1]++;
        if (word_length_frequencies[current_word_length - 1] > largest_frequency) {
          largest_frequency = word_length_frequencies[current_word_length - 1];
          largest_frequency_length = 0;
          for (uint32_t i = largest_frequency; i > 0; i /= 10) {
            largest_frequency_length++;
          }
        }
      }
      current_word_length = 0;
      finished_counting = (character == EOF);
    } else {
      current_word_length++;
    }
  }
  /* Print a vertically-aligned histogram. */
  for (uint16_t i = largest_frequency; i > 0; i--) {
    printf("%*d | ", largest_frequency_length, i);
    for (uint16_t j = 0; j < (MAX_WORD_LENGTH + 1); j++) {
      printf("%c  ", (word_length_frequencies[j] >= i) ? '#' : ' ');
    }
    printf("\n");
  }
  printf("%*c", largest_frequency_length + 2, '+');
  for (uint16_t i = 0; i < (MAX_WORD_LENGTH * 3) + 4; i++) {
    putchar('-');
  }
  printf("\n%*c", largest_frequency_length + 2, ' ');
  for (uint16_t i = 0; i < MAX_WORD_LENGTH; i++) {
    printf(" %-2d", i + 1);
  }
  printf(" >%d\n", MAX_WORD_LENGTH);
  printf("\nX-axis: Word length\nY-axis: Frequency\n");
  return EXIT_SUCCESS;
}
