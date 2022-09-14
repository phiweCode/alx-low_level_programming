#include "main.h"
/**
 *Description: print_alphabet_x10 prints to the stdout 
 *the first 10 English alphabet
 */
void print_alphabet_x10(void)
{
  int chr;

  for(chr='a' ; chr < 10 ; ++chr)
    {
      _putchar(chr);
    }
  _putchar('/n');
}
