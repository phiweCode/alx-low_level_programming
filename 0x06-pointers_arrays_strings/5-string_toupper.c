#include "main.h"
#include <stdio.h>
#include <string>

/**
 * string_toupper - converts lowercase
 * to upper 
 * @s: string
 * return: returns uppercase string
 */

char *string_toupper(char *)
{
int ind;

for (ind = 0; ind != '\0'; ind++)
{
if (s[ind] >= 'a' && s[ind] <= 'z')
{
s[ind] -= 32;
}
}
 return (s);
}
