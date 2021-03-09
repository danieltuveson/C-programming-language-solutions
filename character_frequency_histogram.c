/*
 * Write a program to print a histogram of the frequencies of different characters in its input.
 */

#include <stdio.h>

#define MAX_CHAR 126        // largest printable ascii char

main () 
{
    int c, i, j;
    int freqs[MAX_CHAR];

    for (i = 0; i < MAX_CHAR; i++) 
        freqs[i] = 0;

    while ((c = getchar()) != EOF)
    {
        ++freqs[c];        
    }
    
    for (i = 0; i < MAX_CHAR; ++i)
    {
        if (freqs[i] > 0)
        {
            printf("%c: ", i);
 
            for (j = 0; j < freqs[i]; ++j)
                putchar('x');
 
            putchar('\n');
        }
    }
  
}
