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

while (count < 10)
{
for (i = 0; i <= 14; i++)
{
if (i / 10 >= 1)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar('\n'); 
count ++;
}
}
