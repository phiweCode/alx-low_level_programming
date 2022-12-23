#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - converts lowercase
 * to upper
 * @s: string
 * return: returns uppercase string
 */

char *string_toupper(char *s)
{
int ind;

for (ind = 0; ind != '\0'; ind++)
{

printf("This is char s before %c", s[ind]); 
  
s[ind] = toupper(s[ind]);

printf("This is char s after %c", s[ind]);
}
 
return (s);
}
