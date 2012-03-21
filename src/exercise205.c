/*
 * A solution to Exercise 2-5 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart, <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int32_t any(char *, char *);

int main(void)
{
	char *test_string_one = "Gooseberries.";
	char *test_string_two = "Kiwis.";
	printf("%d", any(test_string_one, test_string_two));
	return EXIT_SUCCESS;
}

int32_t any(char *string_one, char *string_two)
{
	for (uint32_t i = 0; string_one[i] != '\0'; i++) {
		for (uint32_t j = 0; string_two[j] != '\0'; j++) {
			if (string_one[i] == string_two[j]) {
				return i;
			}
    }
  }
  return -1;
}
