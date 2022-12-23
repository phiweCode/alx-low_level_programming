#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - compares two strings
* @s1: is the first string compared
* @s2: is the second string compared
* return: returns 0 if the strings are
* equal, a positive or negatice one if
* they are not
*/

int _strcmp(char *s1, char *s2)
{

int i = 0;

while (s1[i] - s2[2] == 0 && s1[i] != '\0')
  i++;

return (s1[i] - s2[i]);

}
