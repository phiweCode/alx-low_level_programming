#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies one string
 * to another
 * @dest: string to be copied to
 * @src: string with to copy from
 * Return: returns pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

char *ptr;

ptr = strcpy(dest,src); 
  
return (ptr);
}
