#include <stdio.h>

main ()
{
    int c, skip;

    skip = 0;
    while ((c = getchar()) != EOF)
    {
        
        if (!skip && c == ' ') {
            skip = 1;
            putchar(' ');
        }
        else if (c != ' ') {
            skip = 0;
        }
        
        if (!skip) 
            putchar(c); 

    }
}
