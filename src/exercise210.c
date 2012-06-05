/*
 * A solution to Exercise 2-3 in The C Programming Language (Second Edition).
 *
 * This file was written by Damien Dart, <damiendart@pobox.com>. This is free
 * and unencumbered software released into the public domain. For more
 * information, please refer to the accompanying "UNLICENCE" file.
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int16_t lower(int16_t);

int main(void)
{
	int16_t character;
	while((character = getchar()) != EOF) {
		putchar(lower(character));
  }
	return EXIT_SUCCESS;
}

int16_t lower(int16_t character)
{
	return (character >= 'A' && character <= 'Z') ? character + 'a' - 'A' : character;
}
