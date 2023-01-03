#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - prints the first
 * occurance of a character
 * @s: pointer to the character
 * @c: target character
 * Return: returns char pointer
 */

char *_strchr(char *s, char c)
{
size_t i;
char *rs;

for (i = 0; i <= strlen(s); i++)
{

if (s[i] == c)
{
rs = &s[i];

return (rs);
}
}
return NULL;
}
