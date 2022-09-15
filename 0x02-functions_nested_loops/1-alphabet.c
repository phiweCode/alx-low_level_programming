#include "main.h"

/**
 * Description: print_alphabet - prints out English alphabets
 * to the standard output
 */

void print_alphabet(void)
{
int chr;

for (chr = 'a' ; chr <= 'z' ; ++chr)
{
_putchar(chr);
}
_putchar('\n');
}
