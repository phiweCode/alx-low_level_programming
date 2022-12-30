#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - converts lowercase
 * to upper
 * @s: string
 * Return: returns uppercase string
 */

char *string_toupper(char *s)
{
int ind;
int len;
len = (int)strlen(s);
for (ind = 0; ind < len; ind++)
{
s[ind] = toupper(s[ind]);
}
return (s);
}
