#include "main.h"

/**
 * Description: print_numbers - prints numbers from 0 - 9
 */

void print_numbers(void)
{
int i = 0;

while (i <= 9)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
