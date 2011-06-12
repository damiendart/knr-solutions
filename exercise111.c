/* Exercise 1-11: How would you test the word count program? What kinds of
 * input are most likely to uncover bugs if there are any? */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
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
