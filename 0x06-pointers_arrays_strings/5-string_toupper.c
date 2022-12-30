#include "main.h"
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

for (ind = 0; ind < strlen(s); ind++)
{ 

s[ind] = toupper(s[ind]);
 
}
 
return (s);
}
