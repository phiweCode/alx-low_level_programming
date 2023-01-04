#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - prints the longest
 * prefix in a string
 * @s: is the source string
 * @accept: is the set of character
 * to be matched
 * Return: returns the length of
 * the longest prefix
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int i;
unsigned int j;
unsigned int count;

count = 0;

for (i = 0; i < strlen(s); i++)
{

if (count == i)
{

for (j = 0; j < strlen(accept); j++)
{

if (s[i] == accept[j])
{
count ++;
break;
}
}
}
else if (count < i)
{
if (count >= strlen(accept) )
{
return (count);
}
else
{
return (0);
break;
}
}
}
return (0);
}
