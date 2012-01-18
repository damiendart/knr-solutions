/* Exercise 1-16: Revise the main routine of the longest-line program so it
 * will correctly print the length of arbitrarily long input lines, and as
 * much as possible of the text.
 *
 * NOTE: The following code is a copy of the code found on page 29 of The C
 * Programming Language (Second Edition) with my edits marked. */

#include <stdio.h>
#define MAXLINE 100    /* maximum input line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(void) /* Line edited to keep anally-retentive GCC happy. */
{
    int len;            /* current line length */
    int max;            /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
/* My edits start here. -- Damien */
        /* The getline function below would stop counting characters once the
         * limit was reached. The following code carries on the counting. */
        int c;
        if (line[len - 1] != '\n') {
            while ((c = getchar()) != EOF && c != '\n') {
                ++len;
            }
            if (c == '\n') {
                ++len;
            }
        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)    /* there was a line */
        printf("%d: %s", max, longest);
    return 0;
/* My edits end here. -- Damien */
}


/* getline:  read a line into s, return length */
int getline(char s[], int lim)
{
    int c = 0, i; /* Line edited to keep anally-retentive GCC happy. */

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
