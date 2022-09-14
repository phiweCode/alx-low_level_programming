#include "main.h"
#include <string.h>

/**
*Description: main - prints _putchar to stdout
*Return: returns 0 when succesful
*/

int main(void)
{
char string[] = "_putchar";
int chr;

for (chr = 0; chr < 8; ++chr)
   _putchar(string[chr]);
_putchar('\n');

return (0);
}
