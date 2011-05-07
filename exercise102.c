/* Experiment to find out what happened when printf's argument string contains
 * \c, where c is some character not listed above.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  printf("\\a produces an audible or visual alert: \a\n");
  printf("\\f produces a formfeed: \f\n");
  printf("\\r produces a carriage return: \rlololol\n");
  printf("\\v produces a vertical tab: \t\n");
  return EXIT_SUCCESS;
}
