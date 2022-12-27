#include "main.h"

/**
 * print_diagonal - prints
 * diagonal line
 * @n: length of diagonal
 */

void print_diagonal(int n)
{

int i;
int temp;

if (n > 0)
{
for (i = 0; i < n; i++)
{
temp = 0;

while (temp < i)
{
_putchar(' ');
temp++;
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}

}
