#include "main.h"
#include <string.h>

/**
 * Description: strncat - concatinates two strings of specified length
 * @dest: is the char input string pointer to be appended.
 * @src: is the char input string pointer to append the other
 * Return: returns the concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest,src,n));
}
