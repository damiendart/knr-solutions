/*
 * A solution to Exercise 2-4 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart, <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */


#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void squeeze(char [], char *);

int main(void)
{
  char test_string[] = "Kumquat!";
  squeeze(test_string, "Squat.");
  printf("%s\n", test_string);
  return EXIT_SUCCESS;
}

void squeeze(char string_one[], char *string_two)
{
  int32_t i, j, k;
  bool in_string_two = false;
  for (i = k = 0; string_one[i] != '\0'; i++) {
    in_string_two = false;
    for (j = 0; (string_two[j] != '\0') && (in_string_two == false); j++) {
      in_string_two = (string_one[i] == string_two[j]);
    }
    if (in_string_two == false) {
      string_one[k++] = string_one[i];
    }
  }
  string_one[k] = '\0';
}
