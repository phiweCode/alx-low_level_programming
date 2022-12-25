#include <stdio.h>

/**
 * main - prints out a comma
 * separared list of integers
 * Return: returns 0 upon success
 */

int main(void)
{

int numbers;

for (numbers = 0; numbers < 10; numbers++)
{

putchar((char)numbers + '0');

if (numbers != 9)
{
putchar(',');
putchar(' ');
}

}
putchar('\n');
return (0);

}
