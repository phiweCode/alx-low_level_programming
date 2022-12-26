#include "main.h"

/**
 * jack_bauer - prints every minute
 */

void jack_bauer(void)
{

int sec;
int min;
int hourFD;
int hourSD;

for (hourSD = 0; hourSD < 3; hourSD++)
{
for (hourFD = 0; hourFD < 10; hourFD++)
{
if (hourSD <= 2 && hourFD <= 3)
{
for (min = 0; min < 6; min++)
{
for (sec = 0; sec < 10; sec++)
{
putchar((char)hourSD + '0');
putchar((char)hourFD + '0');
putchar(':');
putchar((char)min + '0');
putchar((char)sec + '0');
putchar('\n');
}
}
}
}
}
putchar('\n');
}
