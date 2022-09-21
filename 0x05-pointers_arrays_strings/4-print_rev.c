#include "main.h"
#include <string.h>

/**
 * Description: print_rev - prints a reversed string
 * @s: is the input char pointer parameter
 */

void print_rev(char *s)
{
int i;

for (i = strlen(*s); *(s + i) >= *s; i--)
{
_putchar(*(s + 1));
}

}
