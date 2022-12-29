#include "main.h"

/**
 * _strcpy - copies one string
 * to another
 * @dest: string to be copied to
 * @src: string with to copy from
 * Return: returns pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

int i;

for (i = 0; src[i] >= '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
