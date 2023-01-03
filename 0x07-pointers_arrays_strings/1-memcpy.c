#include "main.h"

/**
 * _memcpuy - copies memory of 
 * variables 
 * @dest: param to which memory 
 * will be copied to 
 * @src: source of memory to be 
 * copied 
 * @n: bytes of memory to be 
 * copied 
 * Return: returns a pointer 
 * to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n) 
{

unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i]; 
}
return (dest);
}
