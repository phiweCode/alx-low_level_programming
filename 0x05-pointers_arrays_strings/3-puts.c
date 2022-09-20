#include "main.h"

/**
 *Description: _puts - prints out a string to the stdout
 *@str: input character pointer paramenter
 */

void _puts(char *str)
{

int i;

for (i = 0 ; *(str + i) != '\0' ; i++)
{
_putchar(*(str + i));
}

_putchar('\n');

}
