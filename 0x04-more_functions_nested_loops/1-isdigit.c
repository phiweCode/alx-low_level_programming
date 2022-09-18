#include "main.h"
#include <ctype.h>

/**
 * Description: _isdigit - checks if an input is a digit
 * @c: is the inpunt argument
 * Return: returns 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
return (0);
}
