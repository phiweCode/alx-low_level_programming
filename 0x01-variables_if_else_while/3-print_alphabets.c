#include <stdio.h>

/**
 * main - prints alphabets in
 * uppercase and lowercase
 * Return: returns 0 always
 */

int main(void)
{

char a;
char A;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}

for (A = 'A'; A <= 'Z'; A++)
{
putchar(A);
}

putchar('\n');
return (0);
}
