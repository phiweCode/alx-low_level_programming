#include <stdio.h>

/**
 * main - prints alpha numericals
 * of base 10
 * Return: returns 0 upon success
 */

int main(void)
{
char i;
int numbers;

for(numbers = 0; numbers < 10; numbers++)
{
putchar((char)numbers + '0');
}

for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}

putchar('\n');
return (0);

}
