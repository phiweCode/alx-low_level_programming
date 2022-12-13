#include <stdio.h>

/**
* main - this program prints out the
* alphabet in lowercase
* Return: returns 0 to terminate on
* completion
*/

int main()
{
char alph;
char i;

alph = 'a';

for(i =alph ; i <='z' ; i++)
{
putchar(i);
}

putchar('\n');

return (0);
}
