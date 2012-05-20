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
  puts("Types of input that could be used to test a word counting program:");
  puts(" - Input with no characters,");
  puts(" - input with just one massive word that's MAX_INT letters long,");
  puts(" - input with more than MAX_INT words,");
  puts(" - input with varying whitespace to delimit words,");
  puts(" - binary input (such as an image file), and");
  puts(" - Unicode input.");
  return EXIT_SUCCESS;
}
