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
if (len > 1) {
char c = s[0];
s[0] = s[len - 1];
s[len - 1] = '\0';
_print_rev_recursion(s + 1);
s[len - 1] = c;
}
}

