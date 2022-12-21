#include "main.h"
#include "2-strlen.c"

/**
 * Description: print_rev - prints a reversed string
 * @s: is the input char pointer parameter
 */

void print_rev(char *s)
{

int i;

for (i = _strlen(s) - 1 ; i >= 0; i--)
{
_putchar(*(s + 1));
}
_putchar('\n');
}
