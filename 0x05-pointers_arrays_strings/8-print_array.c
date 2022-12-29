#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements
 * of an array
 * @a: array
 * @n: number of elements to be
 * prnted
 */

void print_array(int *a, int n)
{

int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i + 1 != n)
{
printf(" ,");
}
}
putchar('\n');
}
