

#include"main.h"

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

lastDigit = n % 10;

_putchar(lastDigit);
 
return (lastDigit);

}
