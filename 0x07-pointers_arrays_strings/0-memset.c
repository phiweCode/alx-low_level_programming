#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the memory are by n
 * bytes
 * @s: param to be allocated memory
 * @b: param to base memory allocation
 * on
 * @n: bytes to allocate
 * Return: returns 's' paramater
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = (unsigned int)b;
}

return (s);
}
