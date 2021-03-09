#include <stdio.h>

main () 
{
    int c, skip;
    skip = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (!skip)
            {
                skip = 1;
                putchar('\n');
            }
        }
        else 
        {
            skip = 0;
        }

        if (!skip)
            putchar(c);
    } 
}
