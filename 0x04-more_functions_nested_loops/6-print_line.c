#include "main.h"

/**
 * print_line - prints the shortest
 * line
 * @n: length of line
 */

void print_line(int n)
{

int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
