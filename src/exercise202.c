/* A solution to Exercise 2-2 in The C Programming Language (Second Edition).
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  uint32_t i = 0;
  uint32_t lim = 100;
  char c = 0;
  char s[lim];
  while (i < (lim - 1)) {
    c = getchar();
    if (c != '\n') {
      if (c != EOF) {
        s[i++] = c;
      }
    }
  }
  s[i] = '\0';
  puts(s);
  return EXIT_SUCCESS;
}
