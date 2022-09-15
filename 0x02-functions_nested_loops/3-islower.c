#include "main.h"

/**
 *Description: _islower - checks if a char is lowercase
 *@c - is the input variable to undergo checking
 *Return: 1 is retuned when char is lowercase or 0 otherwise
 */

int _islower(int c)
{
if( c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
