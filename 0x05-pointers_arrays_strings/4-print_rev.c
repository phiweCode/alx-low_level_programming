#include "main.h"
#include <string.h>

/**
 * Description: print_rev - prints a reversed string
 * @s: is the input char pointer parameter
 */

void print_rev()
{
char *s = "siphi"; 
int i;

for (i = strlen(s); i >= 0; i--)
{
_putchar(*(s + 1));
}
_putchar('\n');
}
