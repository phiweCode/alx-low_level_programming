#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - prints a
* in reverse
* @s: is the input string
*/

void _print_rev_recursion(char *s)
{
size_t len = strlen(s);
if (len > 0) {
_putchar(s[len - 1]);
_print_rev_recursion(s);
}
}

