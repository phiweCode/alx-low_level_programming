#include <stdio.h>

/**
 * main - prints base 10 digit 
 * Return: returns 0 upon 
 */

int main(void)
{

int digit;
  
for (digit = 0; digit < 10; digit++)
{
putchar((char)digit + '0');
}

putchar('\n');
return (0); 

}
