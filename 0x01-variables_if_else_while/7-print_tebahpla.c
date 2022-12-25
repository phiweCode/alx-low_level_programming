#include <stdio.h>

/**
* main - this program prints
* alphabets in reverse
* Return: returns 0 upon success
*/

int main()
{

char i;

for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}

putchar('\n');
return (0);
}
