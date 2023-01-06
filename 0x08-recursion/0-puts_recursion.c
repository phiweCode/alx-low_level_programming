#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - prints out a string
 *  @s: is the input string paramgit
*/

void _puts_recursion(char *s)
{

if (*s == '\0')
{
return;
}
_putchar(*s);
_puts_recursion(s + 1);
_putchar('\n');
}