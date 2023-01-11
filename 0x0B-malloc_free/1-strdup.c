#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - duplicates a string
 * @str: is the input string
 * Return: returns a char pointer
 */

char *_strdup(char *str)
{

char *string;
size_t i;
unsigned int len;

len = strlen(str);
string = malloc(sizeof(char) * len);

if (string != NULL)
{
for (i = 0; i < strlen(str); i++)
{
string[i] = str[i];
}
return (string);
}
else
{
return (NULL);
}

}
