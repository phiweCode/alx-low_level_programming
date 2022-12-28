#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string 
 * @s: string to be reversed
 */

void rev_string(char *s)
{

char temp;
int iter;

for (iter = 0; iter <  _strlen(s) / 2; iter++)
{
temp = s[iter];
s[iter] = s[_strlen(s) - iter - 1];
s[_strlen(s) - iter - 1] = temp; 
} 
}
