#include "main.h"
/**
 *Description: print_alphabet_x10 - prints to the stdout
 *the first 10 English alphabet
 */
void print_alphabet_x10(void)
{
int iter, chr;

for (iter = 0 ; iter < 10 ; iter++)
{
for (chr = 'a'; chr <= 'z' ; ++chr)
_putchar(chr);
_putchar('\n');
}
}
