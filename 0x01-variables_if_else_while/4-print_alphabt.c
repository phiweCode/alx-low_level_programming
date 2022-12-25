#include <stdio.h>

/**
 * main - prints alphabets except
 * 'q' and 'e' characters
 * Return: returns 0 on success
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{

if (i == 'q' || i == 'e')
{
continue;
}
else
{
putchar(i);
}

}

putchar('\n');
return (0);
}
