/* Verify that the expression getchar() != EOF is 0 or 1. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  printf("%d\n", getchar() != EOF);
  return EXIT_SUCCESS;
}
