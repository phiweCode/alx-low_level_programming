#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/*
*Description: This program checks whether a number
*is positive or negative and prints out the 
*the results thereafter returns 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */
if (n == 0)
{
printf("0 is zero\n");
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
