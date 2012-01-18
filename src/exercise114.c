/* Exercise 1-14: Write a program to print a histogram of the frequencies of
 * different characters in its input. */

#include <limits.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
  uint32_t character_frequencies[CHAR_MAX] = { 0 };
  int32_t character;
  while ((character = getchar()) != EOF) {
    /* Only count characters in the ASCII character set; life's too short. */
    if (character < CHAR_MAX) {
      character_frequencies[character]++;
    }
  }
  /* Print a horizontally-aligned histogram. */
  printf("ASCII Character Code | Frequency\n");
  for (int32_t i = 0; i < CHAR_MAX + 1; i++) {
    /* Don't display bars for characters that do not occur in input. */
    if (character_frequencies[i] > 0) {
      printf("%3d | ", i);
      for (uint32_t j = 0; j < character_frequencies[i]; j++) {
        printf("#");
      }
      printf(" (%d)\n", character_frequencies[i]);
    }
  }
  return EXIT_SUCCESS;
}
