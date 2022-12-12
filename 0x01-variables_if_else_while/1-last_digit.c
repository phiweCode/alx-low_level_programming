#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - This program compares the last digit of
* an integer and prints out results
* Return: is always 0
*/


int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

int last_digit = n % 10;

if ( last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n",n,last_digit);
}
else if ( n == 0)
{
printf("Last digit of %d is %d and is 0\n",n,last_digit);
}
else if ( n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",n,last_digit);
}

 return (0);
}
