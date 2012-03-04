/*
 * A solution to Exercise 1-2 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("\\a produces an audible or visual alert: \a\n");
  printf("\\f produces a formfeed: \f\n");
  printf("\\r produces a carriage return: \rlololol\n");
  printf("\\v produces a vertical tab: \t\n");
  return EXIT_SUCCESS;
}
