#include "main.h" 
#include <stdio.h>

/**
 * print_most_numbers - prints numbers 
 * from 0 - 9 excluding 2 and 4
 */

void print_most_numbers(void)
{

int i;

for (i = 0; i <= 9; i++)
{

if (i == 2 ||  i == 4)
{
continue;
}
else
{
_putchar((char)i + '0');
}
}
_putchar('\n');
}
