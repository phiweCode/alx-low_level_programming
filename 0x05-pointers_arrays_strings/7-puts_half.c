#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints last half
 * of string characters
 * @str: string to be printed
 */

void puts_half(char *str)
{

int i;
int strlen = _strlen(str);
 

if (strlen % 2 == 0)
{

for (i = strlen / 2; i < strlen; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
else
{

for (i = (strlen - 1) / 2; i < strlen - 1; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
}
