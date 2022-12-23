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
int i;
int index;

for (i = 0; i != '\0'; i++)
{
if (s1[i] - s2[i] == 0)
{

index = i;

}
else
{
break;
}

}

return (s1[index] - s2[index]);
}
