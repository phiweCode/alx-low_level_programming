#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * of char
 * @size: is the size of the array
 * @c: is the char of the array
 * Return: returns a char pointer
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

i = 0;
ptr = malloc(sizeof(char)*size);

if (size == 0)
{
return NULL;
}
while (i < size)
{
ptr[i] = c;
i++;
}
return ptr;
}
