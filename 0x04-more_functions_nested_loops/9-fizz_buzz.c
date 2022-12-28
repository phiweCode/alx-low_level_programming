#include "main.h"

/**
 * main - this is a fizzbuzz 
 */

void fizzBuzz(void)
{

int i;
int iter;
char fizz[50] = "Fizz";
char buzz[50] = "Buzz";
char fizzBuzz[50] = "FizzBuzz"; 

for (i = 1; i <= 100; i++)
{
if(i % 3 == 0 && i % 5 == 0)
{
for(iter = 0; fizzBuzz[iter] != '\0'; iter++)
{
_putchar(fizzBuzz[iter]);
}
_putchar(' ');
}
else if (i % 3 == 0)
{
for(iter = 0; fizz[iter] != '\0'; iter++)
{
_putchar(fizz[iter]);
}
_putchar(' '); 
}
else if(i % 5 == 0)
{
for(iter = 0; buzz[iter] != '\0'; iter++)
{
_putchar(buzz[iter]);
}
_putchar(' ');	    
}
else
{
if(i / 10 > 0)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
_putchar(' ');
}
} 
}
