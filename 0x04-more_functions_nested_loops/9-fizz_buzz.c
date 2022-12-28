#include <stdio.h>

/**
* main - this is a fizzbuzz
* Return: returns 0 on completion
*/

int main(void)
{

int i;
int iter;
char fizz[50] = "Fizz";
char buzz[50] = "Buzz";
char fizzBuzz[50] = "FizzBuzz";

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
for (iter = 0; fizzBuzz[iter] != '\0'; iter++)
{
putchar(fizzBuzz[iter]);
}
putchar(' ');
}
else if (i % 3 == 0)
{
for (iter = 0; fizz[iter] != '\0'; iter++)
{
putchar(fizz[iter]);
}
putchar(' ');
}
else if (i % 5 == 0)
{
for (iter = 0; buzz[iter] != '\0'; iter++)
{
putchar(buzz[iter]);
}
putchar(' ');
}
else
{
if (i / 10 > 0)
{
putchar(i / 10 + '0');
}
putchar(i % 10 + '0');
putchar(' ');
}
}
putchar('\n');
return (0);
}
