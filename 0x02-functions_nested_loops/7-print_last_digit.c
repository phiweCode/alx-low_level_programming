#include"main.h"
#include"6-abs.c"

/**
* print_last_digit - This program returns the
* last digit of an integer
* @n: is an integer arg
* Return: returns the value of the
* last digit of the integer var
*/

int print_last_digit(int n)
{

int lastDigit;

lastDigit = _abs(n % 10);

printf("%d", lastDigit);

return (lastDigit);

}
