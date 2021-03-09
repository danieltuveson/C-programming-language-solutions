/*
 * Writes a program to print a histogram of the lengths of words in its input. 
 */

#include <stdio.h>

// Assuming word length won't exceed MAX_LENGTH
#define MAX_LENGTH 100

main () 
{
    int c, len, i, j;
    int lengths[MAX_LENGTH]; 

    for (i = 0; i < MAX_LENGTH; ++i)
        lengths[i] = 0;

    len = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (len != 0)
            {
                ++lengths[len];
                len = 0;
            }
        }
        else 
        {
            ++len;
        }
    }

    /* If no words of a certain length were found,
     * don't bother printing 0.
     * Print an x for each word of a given length
     */
    for (i = 0; i < MAX_LENGTH; ++i)
    {
        if (lengths[i] > 0)
        {
            printf("%d: ", i);

            for (j = 0; j < lengths[i]; ++j)
                putchar('x');

            putchar('\n');
        }
    }

}
