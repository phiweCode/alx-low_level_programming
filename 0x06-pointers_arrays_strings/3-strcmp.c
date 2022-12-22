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
  int result = strcmp(s1,s2);
  return (result); 
 
}
