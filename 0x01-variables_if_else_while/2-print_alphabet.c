#include <stdio.h>

/**
* main - this program prints out the
* alphabet in lowercase
* Return: returns 0 to terminate on
* completion
*/

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

putchar('\n');

return (0);
}
