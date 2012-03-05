/*
 * A solution to Exercise 2-1 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  puts("Using macros from standard headers:");
  printf("  Range of \"char\": %d to %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("  Range of \"unsigned char\": %d to %u\n", 0, UCHAR_MAX);
  printf("  Range of \"short\": %d to %d\n", SHRT_MIN, SHRT_MAX);
  printf("  Range of \"unsigned short\": %d to %u\n", 0, USHRT_MAX);
  printf("  Range of \"int\": %d to %d\n", INT_MIN, INT_MAX);
  printf("  Range of \"unsigned int\": %d to %u\n", 0, UINT_MAX);
  printf("  Range of \"long\": %ld to %ld\n", LONG_MIN, LONG_MAX);
  printf("  Range of \"unsigned long\": %d to %lu\n", 0, ULONG_MAX);
  printf("  Range of \"float\": %e to %e\n", FLT_MIN, FLT_MAX);
  printf("  Range of \"double\": %e to %e\n", DBL_MIN, DBL_MAX);
  printf("  Range of \"long double\": %Le to %Le\n", LDBL_MIN, LDBL_MAX);
  /* TODO: Compute ranges. */
  return EXIT_SUCCESS;
}
