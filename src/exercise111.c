/*
 * A solution to Exercise 1-11 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart, <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  /* This is such a cheat. */
  printf("Types of input that could be used to test a word counting program:\n");
  printf(" - Input with no characters,\n");
  printf(" - input with just one massive word that's MAX_INT letters long,\n");
  printf(" - input with more than MAX_INT words,\n");
  printf(" - input with varying whitespace to delimit words,\n");
  printf(" - binary input (such as an image file),\n");
  printf(" - and Unicode input.\n");
  return EXIT_SUCCESS;
}
