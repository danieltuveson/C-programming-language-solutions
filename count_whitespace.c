#include <stdio.h>

// count blank, tab, and newline characters
main ()
{
   int c, count;
   
   count = 0;

   while ((c = getchar()) != EOF)
       if (c == '\n' || c == '\t' || c == ' ')
           ++count;
   printf("Number of whitespace characters: %d\n", count);



}
