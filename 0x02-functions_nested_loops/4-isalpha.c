#include "main.h"
#include <ctype.h>
/**
 * Descsription: _isalpha - checks if the char is an alphabet
 *@c: is letter char to be checked
 *Return: returns 0 when succesful and 1 when unsuccesful
 */

int _isalpha(int c)
{
int alphBool = isalpha(c);

if (alphBool > 0)
{
return (1);
}
else
{
return (0);
}
}
