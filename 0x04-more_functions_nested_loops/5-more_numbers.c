#include "main.h"

/**
 * more_numbers - prints numbers from 0-14
 * ten times
 */

void more_numbers(void)
{

int i;
int count;

count = 0;

while(count <= 10)
{
for (i = 0; i <= 9; i++)
{
_putchar((char)i + '0');
}

for (i = 10; i <= 14; i++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
putchar('\n');
count ++;
}
}
